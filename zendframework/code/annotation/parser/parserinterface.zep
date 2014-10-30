/*

This file is part of the php-ext-zendframework package.

For the full copyright and license information, please view the LICENSE
file that was distributed with this source code.

*/

namespace Zend\Code\Annotation\Parser;

interface ParserInterface
{
    /**
     * Respond to the "createAnnotation" event
     *
     * @param  EventInterface  $e
     * @return false|\stdClass
     */
    public function onCreateAnnotation(e) -> <\stdClass>;

    /**
     * Register an annotation this parser will accept
     *
     * @param  mixed $annotation
     * @return void
     */
    public function registerAnnotation(var annotation) -> void;

    /**
     * Register multiple annotations this parser will accept
     *
     * @param  array|\Traversable $annotations
     * @return void
     */
    public function registerAnnotations(var annotations) -> void;

}


extern zend_class_entry *zendframework_eventmanager_sharedeventaggregateawareinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_EventManager_SharedEventAggregateAwareInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_eventmanager_sharedeventaggregateawareinterface_attachaggregate, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, aggregate, ZendFramework\\EventManager\\SharedListenerAggregateInterface, 0)
	ZEND_ARG_INFO(0, priority)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_eventmanager_sharedeventaggregateawareinterface_detachaggregate, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, aggregate, ZendFramework\\EventManager\\SharedListenerAggregateInterface, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_eventmanager_sharedeventaggregateawareinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_EventManager_SharedEventAggregateAwareInterface, attachAggregate, arginfo_zendframework_eventmanager_sharedeventaggregateawareinterface_attachaggregate)
	PHP_ABSTRACT_ME(ZendFramework_EventManager_SharedEventAggregateAwareInterface, detachAggregate, arginfo_zendframework_eventmanager_sharedeventaggregateawareinterface_detachaggregate)
  PHP_FE_END
};

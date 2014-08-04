
extern zend_class_entry *test_oo_abstractclass_ce;

ZEPHIR_INIT_CLASS(Test_Oo_AbstractClass);

PHP_METHOD(Test_Oo_AbstractClass, testMethodDeclaration);
PHP_METHOD(Test_Oo_AbstractClass, testMethodDeclarationWithReturnType);
PHP_METHOD(Test_Oo_AbstractClass, testMethodDeclarationWithParameter);
PHP_METHOD(Test_Oo_AbstractClass, testMethodDeclarationWithParameterAndReturnType);
PHP_METHOD(Test_Oo_AbstractClass, testAbstractMethodDeclaration);
PHP_METHOD(Test_Oo_AbstractClass, testAbstractMethodDeclarationWithReturnType);
PHP_METHOD(Test_Oo_AbstractClass, testAbstractMethodDeclarationWithParameter);
PHP_METHOD(Test_Oo_AbstractClass, testAbstractMethodDeclarationWithParameterAndReturnType);

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_oo_abstractclass_testmethoddeclarationwithparameter, 0, 0, 1)
	ZEND_ARG_INFO(0, a)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_oo_abstractclass_testmethoddeclarationwithparameterandreturntype, 0, 0, 1)
	ZEND_ARG_INFO(0, a)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_oo_abstractclass_testabstractmethoddeclarationwithparameter, 0, 0, 1)
	ZEND_ARG_INFO(0, a)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_oo_abstractclass_testabstractmethoddeclarationwithparameterandreturntype, 0, 0, 1)
	ZEND_ARG_INFO(0, a)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(test_oo_abstractclass_method_entry) {
	PHP_ME(Test_Oo_AbstractClass, testMethodDeclaration, NULL, ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
	PHP_ME(Test_Oo_AbstractClass, testMethodDeclarationWithReturnType, NULL, ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
	PHP_ME(Test_Oo_AbstractClass, testMethodDeclarationWithParameter, arginfo_test_oo_abstractclass_testmethoddeclarationwithparameter, ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
	PHP_ME(Test_Oo_AbstractClass, testMethodDeclarationWithParameterAndReturnType, arginfo_test_oo_abstractclass_testmethoddeclarationwithparameterandreturntype, ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
	PHP_ME(Test_Oo_AbstractClass, testAbstractMethodDeclaration, NULL, ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
	PHP_ME(Test_Oo_AbstractClass, testAbstractMethodDeclarationWithReturnType, NULL, ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
	PHP_ME(Test_Oo_AbstractClass, testAbstractMethodDeclarationWithParameter, arginfo_test_oo_abstractclass_testabstractmethoddeclarationwithparameter, ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
	PHP_ME(Test_Oo_AbstractClass, testAbstractMethodDeclarationWithParameterAndReturnType, arginfo_test_oo_abstractclass_testabstractmethoddeclarationwithparameterandreturntype, ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
  PHP_FE_END
};
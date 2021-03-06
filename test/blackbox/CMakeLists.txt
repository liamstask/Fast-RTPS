if(NOT ((MSVC OR MSVC_IDE) AND EPROSIMA_INSTALLER) AND fastcdr_FOUND)
    include(${PROJECT_SOURCE_DIR}/cmake/dev/gtest.cmake)

    if(WIN32)
        add_definitions(-D_WIN32_WINNT=0x0501)
    endif()


    ###############################################################################
    # Unit tests
    ###############################################################################
    set(BLACKBOXTESTS_SOURCE BlackboxTests.cpp
        types/HelloWorld.cpp
        types/HelloWorldType.cpp
        types/Data64kb.cpp
        types/Data64kbType.cpp
        RTPSAsSocketReader.cpp
        RTPSAsSocketWriter.cpp
        RTPSWithRegistrationReader.cpp
        RTPSWithRegistrationWriter.cpp
        PubSubHelloWorldReader.cpp
        PubSubHelloWorldWriter.cpp
        ReqRepHelloWorldRequester.cpp
        ReqRepHelloWorldReplier.cpp
        PubSubData64kbReader.cpp
        PubSubData64kbWriter.cpp
        )
    add_executable(BlackboxTests ${BLACKBOXTESTS_SOURCE})
    add_gtest(BlackboxTests ${BLACKBOXTESTS_SOURCE})
    target_include_directories(BlackboxTests PRIVATE ${Boost_INCLUDE_DIR} ${GTEST_INCLUDE_DIRS})
    target_link_libraries(BlackboxTests fastrtps fastcdr ${GTEST_LIBRARIES})
endif()


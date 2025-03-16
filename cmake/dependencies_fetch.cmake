include(FetchContent)

function(CloneRepository repositoryURL branchName projectName sourceDir)
    #Commands are left empty so that we only checkout the source and no not perform any kind of build
    message("Starting to clone ${projectName} into ${sourceDir}")
    FetchContent_Declare(
            "${projectName}"
            GIT_REPOSITORY "${repositoryURL}"
            SOURCE_DIR "${sourceDir}"
            GIT_TAG "origin/${branchName}"
            CONFIGURE_COMMAND ""
            BUILD_COMMAND ""
            INSTALL_COMMAND ""
    )
    FetchContent_MakeAvailable(${projectName})
endfunction(CloneRepository)
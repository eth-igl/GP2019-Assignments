////////////////////////////////////////////////////////////////////////////////
// TravisCI_stubs.cpp
////////////////////////////////////////////////////////////////////////////////
/*! @file
//  TravisCI's Linux VM apparently doesn't support modern OpenGL and linking
//  will fail if NanoGUI is used. This file provides stubs for the missing
//  symbols. (Only build this on TravisCI!!!)
*/
////////////////////////////////////////////////////////////////////////////////
#include <GL/gl.h>

extern "C" {
GLuint glGetUniformBlockIndex(GLuint /* program */,
                              const GLchar * /* uniformBlockName */) { } 

GLuint glUniformBlockBinding(GLuint /* program */,
                             GLuint /* uniformBlockIndex */,
                             GLuint /* uniformBlockBinding */) { }
}

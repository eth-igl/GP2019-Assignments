#ifndef __ex5__Lasso__
#define __ex5__Lasso__

#include <igl/opengl/glfw/Viewer.h>

using Viewer = igl::opengl::glfw::Viewer;

class Lasso
{
public:

public:
  Lasso(const Eigen::MatrixXd &V_,
         const Eigen::MatrixXi &F_,
         const Viewer &v);
  ~Lasso();

private:
  const Eigen::MatrixXd &V;
  const Eigen::MatrixXi &F;
  const Viewer &viewer;

  std::vector<std::vector<unsigned int> > stroke2DPoints;
  double d = -1;
public:
  int strokeAdd(int mouse_x, int mouse_y);
  void strokeFinish(Eigen::VectorXi &selected_vertices);
  void strokeReset();
  int pickVertex(int mouse_x, int mouse_y);
  //the stroke
  std::vector< Eigen::Matrix<double, 1,3>  > strokePoints;
};

#endif

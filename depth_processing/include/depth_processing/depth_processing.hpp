#pragma once

namespace iarc2020::depth_processing {

struct intrinsicParam {
    int width;
    int height;
    float fx;
    float fy;
    float cx;
    float cy;
    float scale_factor;
};

class depthProcessor {
    public:
        depthProcessor();
        ~depthProcessor();
        //void rgbdToPointCloud(); 
        // depth_image_proc already provudes necessary conversion
        // function to convert point_cloud to pcl::pointcloud


    private:
        // cv::Mat depth_img_;
        // cv::Mat colour_img_;
        // intrinsicParam camera_params_;
        // pcl::PointCloud<pcl::PointXYZ> point_cloud_;
        
};

} //namespace iarc2020::depth_processing
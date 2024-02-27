#include <iostream>
#include <vector>

double findMedianSortedArrays(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    int totalSize = nums1.size() + nums2.size();
    int halfSize = (totalSize + 1) / 2; 

  
    if (nums1.size() > nums2.size()) {
        return findMedianSortedArrays(nums2, nums1);
    }

    int left = 0, right = nums1.size();

    while (left <= right) {
        int partition1 = (left + right) / 2;
        int partition2 = halfSize - partition1;

        int maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
        int minRight1 = (partition1 == nums1.size()) ? INT_MAX : nums1[partition1];

        int maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
        int minRight2 = (partition2 == nums2.size()) ? INT_MAX : nums2[partition2];

        if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
            if (totalSize % 2 == 0) {
                return (std::max(maxLeft1, maxLeft2) + std::min(minRight1, minRight2)) / 2.0;
            } else {
                return std::max(maxLeft1, maxLeft2);
            }
        } else if (maxLeft1 > minRight2) {
            right = partition1 - 1;
        } else {
            left = partition1 + 1;
        }
    }

    return -1;
}

int main() {
    std::vector<int> nums1 = {1, 3#include <iostream>
#include <vector>

double findMedianSortedArrays(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    int totalSize = nums1.size() + nums2.size();
    int halfSize = (totalSize + 1) / 2;  // To handle both even and odd totalSize

    // Make sure nums1 is the smaller array
    if (nums1.size() > nums2.size()) {
        return findMedianSortedArrays(nums2, nums1);
    }

    int left = 0, right = nums1.size();

    while (left <= right) {
        int partition1 = (left + right) / 2;
        int partition2 = halfSize - partition1;

        int maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
        int minRight1 = (partition1 == nums1.size()) ? INT_MAX : nums1[partition1];

        int maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
        int minRight2 = (partition2 == nums2.size()) ? INT_MAX : nums2[partition2];

        if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
            if (totalSize % 2 == 0) {
                return (std::max(maxLeft1, maxLeft2) + std::min(minRight1, minRight2)) / 2.0;
            } else {
                return std::max(maxLeft1, maxLeft2);
            }
        } else if (maxLeft1 > minRight2) {
            right = partition1 - 1;
        } else {
            left = partition1 + 1;
        }
    }

    // If input arrays are not sorted or do not contain proper values, return an error value.
    return -1;
}

int main() {
    std::vector<int> nums1 = {1, 3};
    std::vector<int> nums2 = {2};

    double median = findMedianSortedArrays(nums1, nums2);

    std::cout << "Median: " << median << std::endl;

    return 0;
}
};
    std::vector<int> nums2 = {2};

    double median = findMedianSortedArrays(nums1, nums2);

    std::cout << "Median: " << median << std::endl;

    return 0;
}


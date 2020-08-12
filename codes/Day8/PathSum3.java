class Solution {
    public int pathSum(TreeNode root, int sum) {
        if (root == null) {
            return 0;
        }

       
        return countPath(root, sum) + pathSum(root.left, sum) + pathSum(root.right, sum);
    }

    private int countPath(TreeNode root, int target) {
        int count = 0;
        if (root == null) {
            return count;
        }
        if (root.val == target) {
            count++;
        }

        count += countPath(root.left, target - root.val);
        count += countPath(root.right, target - root.val);
        return count;
    }
}
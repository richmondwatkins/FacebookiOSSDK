// Copyright (c) 2014-present, Facebook, Inc. All rights reserved.
//
// You are hereby granted a non-exclusive, worldwide, royalty-free license to use,
// copy, modify, and distribute this software in source code or binary form for use
// in connection with the web services and APIs provided by Facebook.
//
// As with any software that integrates with the Facebook platform, your use of
// this software is subject to the Facebook Developer Principles and Policies
// [http://developers.facebook.com/policy/]. This copyright notice shall be
// included in all copies or substantial portions of the software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <UIKit/UIKit.h>

#import "FBSDKShareDialogMode.h"
#import "FBSDKSharing.h"
#import "FBSDKSharingContent.h"

/*!
 @abstract A dialog for sharing content on Facebook.
 */
@interface FBSDKShareDialog : NSObject <FBSDKSharingDialog>

/*!
 @abstract Convenience method to show an FBSDKShareDialog with a fromViewController, content and a delegate.
 @param viewController A UIViewController to present the dialog from, if appropriate.
 @param content The content to be shared.
 @param delegate The receiver's delegate.
 */
+ (instancetype)showFromViewController:(UIViewController *)viewController
                           withContent:(id<FBSDKSharingContent>)content
                              delegate:(id<FBSDKSharingDelegate>)delegate;

/*!
 @abstract A UIViewController to present the dialog from, if appropriate.
 @discussion This value is required for FBSDKShareDialogModeShareSheet.
 */
@property (nonatomic, weak) UIViewController *fromViewController;

/*!
 @abstract The mode with which to display the dialog.
 @discussion Defaults to FBSDKShareDialogModeAutomatic, which will automatically choose the best available mode.
 */
@property (nonatomic, assign) FBSDKShareDialogMode mode;

@end

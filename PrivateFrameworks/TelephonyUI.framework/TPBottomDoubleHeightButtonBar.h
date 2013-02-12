/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPButton, UIImageView, UIView;

@interface TPBottomDoubleHeightButtonBar : TPBottomBar {
    UIImageView *_backgroundView;
    TPButton *_bottomButton;
    UIView *_bottomWell;
    TPButton *_topButton;
    UIView *_topWell;
}

@property(retain,readonly) TPButton * bottomButton;
@property(retain,readonly) TPButton * topButton;

+ (id)_backgroundImage;
+ (float)defaultHeightForOrientation:(int)arg1;

- (id)bottomButton;
- (void)dealloc;
- (id)initForIncomingCallOnFaceTimeCallWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)topButton;

@end
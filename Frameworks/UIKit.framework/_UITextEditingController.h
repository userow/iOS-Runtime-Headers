/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIButton, UILabel;

@interface _UITextEditingController : UIViewController {
    UILabel *_description;
    UIButton *_doneButton;
    UILabel *_smallTitle;
    UILabel *_title;
}

+ (id)sharedEditingController;

- (void)_doneButtonClicked;
- (void)_layoutEditingViews;
- (void)configureForTextControl:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
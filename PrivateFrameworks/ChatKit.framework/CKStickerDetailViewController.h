/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKStickerDetailViewController : UIViewController <CKAdaptivePresentedControllerProtocol, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _chatItems;
    <CKStickerDetailViewControllerDelegate> * _delegate;
    CKStickerDetailNavigationBar * _navigationBar;
    UITableView * _tableView;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) NSArray *chatItems;
@property (nonatomic, readonly) UIButton *closeButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKStickerDetailViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CKStickerDetailNavigationBar *navigationBar;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (void)_viewButtonTapped:(id)arg1;
- (id)chatItems;
- (id)closeButton;
- (BOOL)constrainToPresentingVCBounds;
- (id)delegate;
- (id)initWithStickerChatItems:(id)arg1;
- (void)loadView;
- (id)navigationBar;
- (BOOL)preserveModalPresentationStyle;
- (void)setChatItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (BOOL)shouldAutorotate;
- (id)tableView;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (id)visualEffectView;
- (BOOL)wantsWindowedPresentation;

@end

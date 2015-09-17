/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKDashboardHostViewController : GKUIRemoteViewController <GKGameCenterDashboardServiceProtocol> {
    NSObject *_dashboardAssetController;
    GKGameCenterViewController *_delegateWeak;
}

@property (nonatomic, retain) NSObject *dashboardAssetController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GKGameCenterViewController *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKGame *game;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)dashboardExtension;
+ (BOOL)dismissAutomaticallyAfterExtensionCompletion;

- (id)contextForRequestIdentifier;
- (id)dashboardAssetController;
- (void)dealloc;
- (id)delegate;
- (void)hostDidChangeLeaderboardIdentifier:(id)arg1;
- (void)hostDidChangeLeaderboardTimeScope:(id)arg1;
- (void)hostDidChangeViewState:(id)arg1;
- (void)hostSupportsShowingPlayForChallenge:(BOOL)arg1;
- (void)hostSupportsShowingPlayForTurnBasedMatch:(BOOL)arg1;
- (void)hostSupportsShowingQuitForTurnBasedMatch:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)remoteViewControllerIsCanceling;
- (void)remoteViewControllerIsFinishing;
- (void)setDashboardAssetController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
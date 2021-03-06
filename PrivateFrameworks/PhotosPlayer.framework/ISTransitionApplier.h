/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISTransitionApplier : NSObject <CAAnimationDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)defaultApplier;

- (void)_applyAlpha:(float)arg1 scale:(float)arg2 blurRadius:(float)arg3 toLayer:(id)arg4 withTransitionOptions:(id)arg5 completion:(id /* block */)arg6;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofLayer:(id)arg3 withTransitionOptions:(id)arg4 completion:(id /* block */)arg5;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 toPhotoLayer:(id)arg3 videoLayer:(id)arg4 crossfadeLayer:(id)arg5 containerLayer:(id)arg6 completion:(id /* block */)arg7;

@end

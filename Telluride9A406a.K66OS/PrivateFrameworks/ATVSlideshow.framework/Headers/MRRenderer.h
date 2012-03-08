/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MRLayerParallelizer, MRContext, NSDictionary, CADisplayLink, MRRendererInternal, MCMontage;
@protocol MRLiveSlideshowDelegate, MRAsynchronousOperationsDelegate, MZMediaManagement, MRRenderingDelegate, MREditingDelegate, MRFeatureDelegate;

@interface MRRenderer : NSObject {
	MCMontage *mMontage;	// 4 = 0x4
	MRLayerParallelizer *mTopMRLayer;	// 8 = 0x8
	float mVolume;	// 12 = 0xc
	CGSize mSize;	// 16 = 0x10
	double mTimeQuantum;	// 24 = 0x18
	CADisplayLink *mDisplayLink;	// 32 = 0x20
	double mDisplayLinkTimestamp;	// 36 = 0x24
	BOOL mIsCleanedUp;	// 44 = 0x2c
	BOOL mIsPlaying;	// 45 = 0x2d
	BOOL mPushRendering;	// 46 = 0x2e
	int mMode;	// 48 = 0x30
	BOOL mDisplaysFPS;	// 52 = 0x34
	BOOL mIsEditing;	// 53 = 0x35
	NSDictionary *mParameters;	// 56 = 0x38
	MRRendererInternal *mInternal;	// 60 = 0x3c
	id<MZMediaManagement> mAssetManagementDelegate;	// 64 = 0x40
	id<MRRenderingDelegate> mRenderingDelegate;	// 68 = 0x44
	id<MREditingDelegate> mEditingDelegate;	// 72 = 0x48
	id<MRFeatureDelegate> mFeatureDelegate;	// 76 = 0x4c
	NSDictionary *mDescriptionsForRandomTransitionPresetIDs;	// 80 = 0x50
@private
	BOOL _asynchronousOperationsAreSuspended;	// 84 = 0x54
}
@property(retain, nonatomic) id<MZMediaManagement> assetManagementDelegate;	// G=0x34a1fee9; S=0x34a1e639; @synthesize=mAssetManagementDelegate
@property(assign, setter=suspendAsynchronousOperations:) BOOL asynchronousOperationsAreSuspended;	// G=0x34a20039; S=0x34a20049; @synthesize=_asynchronousOperationsAreSuspended
@property(retain) id<MRAsynchronousOperationsDelegate> asynchronousOperationsDelegate;	// G=0x34a23b41; S=0x34a23b61; 
@property(readonly, assign) MRContext *context;	// G=0x34a22815; 
@property(assign, nonatomic) BOOL displaysFPS;	// G=0x34a1fed9; S=0x34a1e6ad; @synthesize=mDisplaysFPS
@property(assign) BOOL dontShowDRMUI;	// G=0x34a22835; S=0x34a22855; 
@property(retain) id<MREditingDelegate> editingDelegate;	// G=0x34a1ff69; S=0x34a1ff7d; @synthesize=mEditingDelegate
@property(retain) id<MRFeatureDelegate> featureDelegate;	// G=0x34a1fef9; S=0x34a1ff0d; @synthesize=mFeatureDelegate
@property(assign) BOOL isEditing;	// G=0x34a1fe89; S=0x34a1fe99; @synthesize=mIsEditing
@property(readonly, assign) BOOL isFlipped;	// G=0x34a22959; 
@property(readonly, assign) BOOL isOffscreen;	// G=0x34a1e621; 
@property(readonly, assign) BOOL isPlaying;	// G=0x34a1fea9; @synthesize=mIsPlaying
@property(retain) id<MRLiveSlideshowDelegate> liveSlideshowDelegate;	// G=0x34a23afd; S=0x34a23b1d; 
@property(assign) double masterClock;	// G=0x34a22875; S=0x34a228cd; 
@property(assign, nonatomic) int mode;	// G=0x34a1fe79; S=0x34a1e525; @synthesize=mMode
@property(retain, nonatomic) MCMontage *montage;	// G=0x34a1fe4d; S=0x34a1b711; @synthesize=mMontage
@property(readonly, assign) NSDictionary *parameters;	// G=0x34a20029; @synthesize=mParameters
@property(assign) BOOL pushRendering;	// G=0x34a1feb9; S=0x34a1fec9; @synthesize=mPushRendering
@property(retain) id<MRRenderingDelegate> renderingDelegate;	// G=0x34a1ff31; S=0x34a1ff45; @synthesize=mRenderingDelegate
@property(assign) BOOL screenBurnTest;	// G=0x34a23b85; S=0x34a23ba5; 
@property(assign, nonatomic) CGSize size;	// G=0x34a1fe5d; S=0x34a1e369; @synthesize=mSize
@property(assign) BOOL slaveFrameMode;	// G=0x34a1baa9; S=0x34a1bac9; 
@property(assign) double time;	// G=0x34a1e165; S=0x34a1e2fd; 
@property(assign) double timeQuantum;	// G=0x34a1ffc1; S=0x34a1fff5; @synthesize=mTimeQuantum
@property(assign) float volume;	// G=0x34a1ffa1; S=0x34a1ffb1; @synthesize=mVolume
+ (float)textScaleForResolution:(CGSize)resolution;	// 0x34a21e29
- (id)init;	// 0x34a1af9d
- (id)initWithParameters:(id)parameters;	// 0x34a1ab41
- (void)_displayFPS:(double)fps;	// 0x34a202d9
- (double)_doAction:(id)action;	// 0x34a1e6cd
- (void)_doActions;	// 0x34a1efed
- (void)_doSnapshot;	// 0x34a1d9c1
- (BOOL)_lockRendering;	// 0x34a1b9e5
- (int)_maxLinesForCurrentEditingTextElement;	// 0x34a227c5
- (CGSize)_maxSizeForCurrentEditingTextElement;	// 0x34a22761
- (void)_nearingEndForEffect:(id)effect;	// 0x34a1fc29
- (void)_nearingEndForSerializer:(id)serializer;	// 0x34a1fb65
- (void)_render:(id)render;	// 0x34a1c429
- (void)_renderForScreenBurnTestAtTime:(double)time;	// 0x34a1d169
- (void)_renderThreadMain;	// 0x34a1c069
- (void)_sendNotificationMainThread:(id)thread;	// 0x34a23cc1
- (void)_setTime:(double)time isResyncing:(BOOL)resyncing;	// 0x34a20059
- (void)_startRenderTimer;	// 0x34a1c255
- (void)_stopRenderTimer;	// 0x34a1c305
- (double)_unalteredTime;	// 0x34a20141
- (void)_undimAllLayersInLayer:(id)layer;	// 0x34a22bf9
- (void)_unlockRendering;	// 0x34a1ba7d
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x34a21c59
- (void)addAudioPlayer:(id)player;	// 0x34a224e9
- (void)addNavigatorToBackHistory:(id)backHistory;	// 0x34a1de05
- (void)addNavigatorToForthHistory:(id)forthHistory;	// 0x34a1de85
// declared property getter: - (id)assetManagementDelegate;	// 0x34a1fee9
// declared property getter: - (BOOL)asynchronousOperationsAreSuspended;	// 0x34a20039
// declared property getter: - (id)asynchronousOperationsDelegate;	// 0x34a23b41
- (BOOL)beginTextEditingOfElement:(id)element inLayer:(id)layer callDelegate:(BOOL)delegate;	// 0x34a21e41
- (BOOL)beginTextEditingOfElement:(id)element inPlug:(id)plug callDelegate:(BOOL)delegate;	// 0x34a22089
- (BOOL)canGoBack;	// 0x34a1dd8d
- (BOOL)canGoForth;	// 0x34a1ddc9
- (id)chooseTransitionIDForRandomTransitionPresetID:(id)randomTransitionPresetID;	// 0x34a23d2d
- (void)cleanup;	// 0x34a1b079
// declared property getter: - (id)context;	// 0x34a22815
- (CGImageRef)copyCGSnapshotAtTime:(double)time andSize:(CGSize)size;	// 0x34a23919
- (CGImageRef)currentFrameAsCGImage;	// 0x34a23941
- (void)dealloc;	// 0x34a1afb1
- (void)deselectAllLayers;	// 0x34a22aa1
- (void)deselectLayer:(id)layer;	// 0x34a229fd
- (void)dimLayersExceptForPathTo:(id)to;	// 0x34a22f89
// declared property getter: - (BOOL)displaysFPS;	// 0x34a1fed9
- (void)doAction:(id)action;	// 0x34a1eef1
// declared property getter: - (BOOL)dontShowDRMUI;	// 0x34a22835
- (int)dragTo:(CGPoint)to withModifiers:(unsigned)modifiers;	// 0x34a21641
- (void)dumpActiveHierarchy;	// 0x34a1fae1
// declared property getter: - (id)editingDelegate;	// 0x34a1ff69
- (void)endTextEditing:(BOOL)editing;	// 0x34a22185
// declared property getter: - (id)featureDelegate;	// 0x34a1fef9
- (void)finalize;	// 0x34a1b015
- (BOOL)getVerticesCoordinatesForCurrentlyEditedTextElement:(CGPoint (*)[4])currentlyEditedTextElement;	// 0x34a21d61
- (void)goBack;	// 0x34a1da6d
- (void)goForth;	// 0x34a1dbfd
- (void)gotoState:(id)state;	// 0x34a1f971
- (int)hitEndAt:(CGPoint)at withModifiers:(unsigned)modifiers;	// 0x34a21671
- (int)hitStartAt:(CGPoint)at hitCount:(int)count withModifiers:(unsigned)modifiers;	// 0x34a20885
// declared property getter: - (BOOL)isEditing;	// 0x34a1fe89
// declared property getter: - (BOOL)isFlipped;	// 0x34a22959
- (BOOL)isHitting;	// 0x34a21b2d
// declared property getter: - (BOOL)isOffscreen;	// 0x34a1e621
// declared property getter: - (BOOL)isPlaying;	// 0x34a1fea9
- (id)layerForPlug:(id)plug;	// 0x34a1f825
- (id)layerForPlugObjectID:(id)plugObjectID;	// 0x34a1f865
- (id)layerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x34a21b4d
- (id)layerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3 localTime:(double *)time;	// 0x34a222a9
// declared property getter: - (id)liveSlideshowDelegate;	// 0x34a23afd
- (void)lockRendering;	// 0x34a1b9c5
// declared property getter: - (double)masterClock;	// 0x34a22875
// declared property getter: - (int)mode;	// 0x34a1fe79
// declared property getter: - (id)montage;	// 0x34a1fe4d
- (unsigned)mouseDownAt:(CGPoint)at clickCount:(int)count withModifiers:(unsigned)modifiers;	// 0x34a22299
- (void)moveNavigatorFromBackToForthHistory:(id)forthHistory;	// 0x34a1df5d
- (void)moveNavigatorFromForthToBackHistory:(id)backHistory;	// 0x34a1e061
- (void)nearingEndForEffect:(id)effect requestedNumberOfSlides:(unsigned)slides firstSlideIndexStillNeeded:(unsigned)needed;	// 0x34a1fd19
- (void)nearingEndForSerializer:(id)serializer;	// 0x34a1fbd1
// declared property getter: - (id)parameters;	// 0x34a20029
- (void)pause;	// 0x34a1bae9
- (id)plugForCurrentSublayerInNavigatorForPlug:(id)plug;	// 0x34a1f885
- (void)processAudioPlayers;	// 0x34a222e1
// declared property getter: - (BOOL)pushRendering;	// 0x34a1feb9
- (void)removeAudioPlayer:(id)player;	// 0x34a226b9
- (void)removeNavigatorFromBackHistory:(id)backHistory;	// 0x34a1df05
- (void)removeNavigatorFromForthHistory:(id)forthHistory;	// 0x34a1df31
- (void)render;	// 0x34a222cd
// declared property getter: - (id)renderingDelegate;	// 0x34a1ff31
- (void)requestRendering:(BOOL)rendering;	// 0x34a1be11
- (BOOL)requestRenderingWithin:(double)within;	// 0x34a1bfc1
- (void)resume;	// 0x34a1bc8d
// declared property getter: - (BOOL)screenBurnTest;	// 0x34a23b85
- (void)selectLayer:(id)layer;	// 0x34a2299d
- (id)selectedLayers;	// 0x34a22bd9
- (void)sendNotification:(id)notification;	// 0x34a23cfd
// declared property setter: - (void)setAssetManagementDelegate:(id)delegate;	// 0x34a1e639
// declared property setter: - (void)setAsynchronousOperationsDelegate:(id)delegate;	// 0x34a23b61
// declared property setter: - (void)setDisplaysFPS:(BOOL)fps;	// 0x34a1e6ad
// declared property setter: - (void)setDontShowDRMUI:(BOOL)drmui;	// 0x34a22855
- (void)setEAGLContext:(id)context;	// 0x34a1b4e5
// declared property setter: - (void)setEditingDelegate:(id)delegate;	// 0x34a1ff7d
// declared property setter: - (void)setFeatureDelegate:(id)delegate;	// 0x34a1ff0d
- (void)setFreezeSizeOfImageRequests:(BOOL)imageRequests;	// 0x34a228f5
// declared property setter: - (void)setIsEditing:(BOOL)editing;	// 0x34a1fe99
// declared property setter: - (void)setLiveSlideshowDelegate:(id)delegate;	// 0x34a23b1d
// declared property setter: - (void)setMasterClock:(double)clock;	// 0x34a228cd
- (void)setMasterStartTime:(double)time andDuration:(double)duration loop:(BOOL)loop;	// 0x34a23a69
- (void)setMasterStartTime:(double)time andDuration:(double)duration mode:(int)mode;	// 0x34a23aa1
// declared property setter: - (void)setMode:(int)mode;	// 0x34a1e525
// declared property setter: - (void)setMontage:(id)montage;	// 0x34a1b711
// declared property setter: - (void)setPushRendering:(BOOL)rendering;	// 0x34a1fec9
// declared property setter: - (void)setRenderingDelegate:(id)delegate;	// 0x34a1ff45
// declared property setter: - (void)setScreenBurnTest:(BOOL)test;	// 0x34a23ba5
// declared property setter: - (void)setSize:(CGSize)size;	// 0x34a1e369
// declared property setter: - (void)setSlaveFrameMode:(BOOL)mode;	// 0x34a1bac9
- (void)setTemporarySize:(CGSize)size;	// 0x34a1e465
// declared property setter: - (void)setTime:(double)time;	// 0x34a1e2fd
// declared property setter: - (void)setTimeQuantum:(double)quantum;	// 0x34a1fff5
- (void)setUseCGLFlushDrawableWorkaround:(BOOL)workaround;	// 0x34a23cad
// declared property setter: - (void)setVolume:(float)volume;	// 0x34a1ffb1
// declared property getter: - (CGSize)size;	// 0x34a1fe5d
// declared property getter: - (BOOL)slaveFrameMode;	// 0x34a1baa9
- (CGImageRef)snapshotAsCGImageForTime:(double)time andSize:(CGSize)size;	// 0x34a234fd
- (id)snapshotOfStates:(id)states atSize:(CGSize)size;	// 0x34a1fa31
- (void)stall;	// 0x34a1fe11
- (void)stepBackward;	// 0x34a1da19
- (void)stepForward;	// 0x34a1d9c5
// declared property setter: - (void)suspendAsynchronousOperations:(BOOL)operations;	// 0x34a20049
- (int)swipeAt:(CGPoint)at inDirection:(unsigned)direction withModifiers:(unsigned)modifiers;	// 0x34a21425
// declared property getter: - (double)time;	// 0x34a1e165
// declared property getter: - (double)timeQuantum;	// 0x34a1ffc1
- (int)trackingAt:(CGPoint)at;	// 0x34a20ad1
- (void)transitionToNextPlugInContainerOfPlug:(id)plug;	// 0x34a1f31d
- (void)transitionToPreviousPlugInContainerOfPlug:(id)plug;	// 0x34a1f5a1
- (void)undimAllLayers;	// 0x34a23499
- (void)unlockRendering;	// 0x34a1b9d5
- (void)updateSelectionLayer;	// 0x34a22999
// declared property getter: - (float)volume;	// 0x34a1ffa1
- (void)warmupAudio:(BOOL)audio;	// 0x34a1c065
@end

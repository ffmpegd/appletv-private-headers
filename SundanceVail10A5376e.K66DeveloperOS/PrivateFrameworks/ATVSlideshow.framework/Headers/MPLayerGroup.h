/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "MPActionSupport.h"
#import "MPAnimationSupport.h"
#import "MPLayerableSupportInternal.h"
#import <NSObject.h> // Unknown library
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import "MPTimingSupport.h"
#import "MPNavigatorSupportInternal.h"
#import "MPNavigatorSupport.h"
#import "MPAutomaticLayerSupport.h"
#import "MPManualLayerSupport.h"

@class NSMutableDictionary, NSString, NSArray, NSMutableArray, MPAudioPlaylist, NSDictionary, MCContainerParallelizer, MPLayerGroupInternal, MCPlugParallel;

@interface MPLayerGroup : NSObject <MPActionableSupportInternal, MPNavigatorSupportInternal, MPLayerableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPActionableSupport, MPAudioSupport, MPLayerableSupport, MPNavigatorSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport, MPAutomaticLayerSupport, MPManualLayerSupport> {
	MPLayerGroupInternal *_internal;	// 4 = 0x4
	NSMutableArray *_userProvidedVideoPaths;	// 8 = 0x8
	NSMutableArray *_userProvidedAudioPaths;	// 12 = 0xc
	MCPlugParallel *_plug;	// 16 = 0x10
	MCContainerParallelizer *_parallelizer;	// 20 = 0x14
	MPAudioPlaylist *_audioPlaylist;	// 24 = 0x18
	NSMutableArray *_layers;	// 28 = 0x1c
	NSMutableDictionary *_layerDictionary;	// 32 = 0x20
	id _parent;	// 36 = 0x24
	NSMutableDictionary *_authoringOptions;	// 40 = 0x28
	NSMutableDictionary *_animationPaths;	// 44 = 0x2c
	NSMutableDictionary *_actions;	// 48 = 0x30
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x3620c059; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x3620b761; converted property
@property(copy, nonatomic) NSArray *audioPaths;	// G=0x3620ab41; S=0x3620ab51; @dynamic
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x36209b5d; S=0x36209b71; converted property
@property(retain) id authoredVersionInfo;	// G=0x3620f605; S=0x3620f625; converted property
@property(retain) NSMutableDictionary *authoringOptions;	// G=0x362087cd; S=0x36208911; converted property
@property(assign, nonatomic) BOOL autoAdjustDuration;	// G=0x3620b201; S=0x3620b225; @dynamic
@property(assign, nonatomic) CGColorRef backgroundCGColor;	// G=0x3620a049; S=0x3620a0a5; @dynamic
@property(retain) id container;	// G=0x3620cf81; S=0x3620cf91; converted property
@property(assign) double duration;	// G=0x36209861; S=0x36209909; converted property
@property(assign) double durationPadding;	// G=0x3620e499; S=0x3620e4b9; converted property
@property(assign, nonatomic) NSDictionary *initialState;	// G=0x3620a4ed; S=0x3620a50d; 
@property(assign) BOOL isTriggered;	// G=0x36209a75; S=0x36209a99; converted property
@property(assign) int lastSlideUsed;	// G=0x36211549; S=0x36211491; converted property
@property(readonly, retain) NSMutableArray *layers;	// G=0x36208add; converted property
@property(assign, nonatomic) int loopingMode;	// G=0x36209f99; S=0x36209fb9; @dynamic
@property(assign) double numberOfLoops;	// G=0x3620ad69; S=0x3620ad89; converted property
@property(assign) float opacity;	// G=0x3620b9ad; S=0x3620b9cd; converted property
@property(retain) id parent;	// G=0x36209b4d; S=0x3620cc49; converted property
@property(assign) double phaseInDuration;	// G=0x3620af09; S=0x3620af29; converted property
@property(assign) double phaseOutDuration;	// G=0x3620b079; S=0x3620b099; converted property
@property(retain) MCPlugParallel *plug;	// G=0x3620c215; S=0x3620d0e9; converted property
@property(assign) CGPoint position;	// G=0x3620ba61; S=0x3620ba91; converted property
@property(assign) float rotationAngle;	// G=0x3620bbd5; S=0x3620bbf5; converted property
@property(assign) float scale;	// G=0x3620beb1; S=0x3620bed1; converted property
@property(assign) CGSize size;	// G=0x3620bc89; S=0x3620bcb9; converted property
@property(assign) BOOL startsPaused;	// G=0x36209ae1; S=0x36209b05; converted property
@property(assign) double timeIn;	// G=0x362099f9; S=0x36209a19; converted property
@property(readonly, assign, nonatomic) NSString *uuid;	// G=0x3620a4cd; 
@property(copy, nonatomic) NSArray *videoPaths;	// G=0x3620a84d; S=0x3620ab01; @dynamic
@property(assign) float xRotationAngle;	// G=0x3620bd49; S=0x3620bd69; converted property
@property(assign) float yRotationAngle;	// G=0x3620bdfd; S=0x3620be1d; converted property
@property(assign) int zIndex;	// G=0x3620bf65; S=0x3620bfe9; converted property
@property(assign) float zPosition;	// G=0x3620bb21; S=0x3620bb41; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x36205fe1
- (id)init;	// 0x36206061
- (id)initWithCoder:(id)coder;	// 0x36206d91
- (id)absoluteVideoPaths;	// 0x3620c9bd
- (id)actionForKey:(id)key;	// 0x3620c069
- (id)actionableObjectForID:(id)anId;	// 0x362115b9
// converted property getter: - (id)actions;	// 0x3620c059
- (void)addAudioPath:(id)path;	// 0x3620a635
- (void)addAudioPaths:(id)paths;	// 0x3620a6a1
- (void)addLayer:(id)layer;	// 0x36208aed
- (void)addLayers:(id)layers;	// 0x36208b49
- (void)addVideoPath:(id)path;	// 0x3620a55d
- (void)addVideoPaths:(id)paths;	// 0x3620a5c9
- (id)allEffectContainers;	// 0x3620c225
- (id)allEffects;	// 0x3620c31d
- (id)allSlides:(BOOL)slides;	// 0x3620c41d
- (id)allSongs;	// 0x3620c5f1
- (id)animationPathForKey:(id)key;	// 0x3620b771
// converted property getter: - (id)animationPaths;	// 0x3620b761
- (double)aspectRatioDidChange:(float)aspectRatio atTime:(double)time;	// 0x3621007d
// declared property getter: - (id)audioPaths;	// 0x3620ab41
// converted property getter: - (id)audioPlaylist;	// 0x36209b5d
// converted property getter: - (id)authoredVersionInfo;	// 0x3620f605
- (id)authoringOptionForKey:(id)key;	// 0x362088f1
// converted property getter: - (id)authoringOptions;	// 0x362087cd
// declared property getter: - (BOOL)autoAdjustDuration;	// 0x3620b201
// declared property getter: - (CGColorRef)backgroundCGColor;	// 0x3620a049
- (void)cachePaths;	// 0x3620cbe5
- (void)cleanup;	// 0x3620dec5
- (void)configureActions;	// 0x3620cd39
// converted property getter: - (id)container;	// 0x3620cf81
- (void)copyActions:(id)actions;	// 0x3620f501
- (void)copyAnimationPaths:(id)paths;	// 0x3620f3fd
- (void)copyAudioPlaylist:(id)playlist;	// 0x3620f3b9
- (void)copyLayerDictionary:(id)dictionary;	// 0x3620f2b5
- (void)copyLayers:(id)layers;	// 0x3620f189
- (void)copyStruct:(id)aStruct;	// 0x3620ed89
- (id)copyWithZone:(NSZone *)zone;	// 0x36207c3d
- (int)countOfLayers;	// 0x362118b1
- (void)dealloc;	// 0x36207de1
- (BOOL)detectFacesInBackground;	// 0x36211875
// converted property getter: - (double)duration;	// 0x36209861
// converted property getter: - (double)durationPadding;	// 0x3620e499
- (void)encodeWithCoder:(id)coder;	// 0x362063f9
- (void)finalize;	// 0x36207da1
// declared property getter: - (id)initialState;	// 0x3620a4ed
- (void)insertLayers:(id)layers atIndex:(int)index;	// 0x36208b89
- (void)insertObject:(id)object inLayersAtIndex:(int)index;	// 0x362119d9
// converted property getter: - (BOOL)isTriggered;	// 0x36209a75
- (id)keyedLayers;	// 0x3620b2bd
// converted property getter: - (int)lastSlideUsed;	// 0x36211549
- (id)layerForKey:(id)key;	// 0x3620b2cd
- (id)layerKey;	// 0x3620b245
- (id)layerKeyDictionary;	// 0x36211855
// converted property getter: - (id)layers;	// 0x36208add
- (BOOL)layersCanPositionZIndex;	// 0x3620cbcd
- (id)liveLock;	// 0x3620f645
// declared property getter: - (int)loopingMode;	// 0x36209f99
- (id)mainLayers;	// 0x3620abd1
- (void)moveLayersFromIndices:(id)indices toIndex:(int)index;	// 0x36209471
- (id)navigatorKey;	// 0x36207f41
- (BOOL)nearingEndWithOptions:(id)options;	// 0x3620f665
- (BOOL)needsToRemoveFadeIn;	// 0x36210a11
// converted property getter: - (double)numberOfLoops;	// 0x3620ad69
- (id)objectID;	// 0x3620cbad
- (id)objectInLayersAtIndex:(int)index;	// 0x362118d1
- (id)observer;	// 0x3620cbe9
// converted property getter: - (float)opacity;	// 0x3620b9ad
- (id)orderedVideoPaths;	// 0x3620a85d
// converted property getter: - (id)parent;	// 0x36209b4d
- (id)parentDocument;	// 0x3620cb0d
// converted property getter: - (double)phaseInDuration;	// 0x3620af09
// converted property getter: - (double)phaseOutDuration;	// 0x3620b079
// converted property getter: - (id)plug;	// 0x3620c215
- (id)plugID;	// 0x3620cb8d
// converted property getter: - (CGPoint)position;	// 0x3620ba61
- (double)posterTime;	// 0x3620c7ed
- (void)reconfigureLoopingMode;	// 0x3620e6e9
- (void)reconnectAll;	// 0x3620e531
- (void)removeActionForKey:(id)key;	// 0x3620c19d
- (void)removeAllAudioPaths;	// 0x3620abb1
- (void)removeAllLayers;	// 0x36208ee1
- (void)removeAllVideoPaths;	// 0x3620ab91
- (void)removeAnimationPathForKey:(id)key;	// 0x3620b921
- (double)removeFadeInIfNeeded;	// 0x36210ce1
- (void)removeLayerForKey:(id)key;	// 0x3620b4e1
- (void)removeLayersAtIndices:(id)indices;	// 0x36209035
- (void)removeObjectFromLayersAtIndex:(int)index;	// 0x36211a19
- (void)removePath:(id)path;	// 0x3620a70d
- (void)removePaths:(id)paths;	// 0x3620a795
- (void)replaceObjectInLayersAtIndex:(int)index withObject:(id)object;	// 0x36211a55
- (void)resetDuration;	// 0x3620e0c1
// converted property getter: - (float)rotationAngle;	// 0x3620bbd5
// converted property getter: - (float)scale;	// 0x3620beb1
- (void)setAction:(id)action forKey:(id)key;	// 0x3620c089
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x3620b791
// declared property setter: - (void)setAudioPaths:(id)paths;	// 0x3620ab51
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x36209b71
// converted property setter: - (void)setAuthoredVersionInfo:(id)info;	// 0x3620f625
- (void)setAuthoringOption:(id)option forKey:(id)key;	// 0x362087dd
// converted property setter: - (void)setAuthoringOptions:(id)options;	// 0x36208911
// declared property setter: - (void)setAutoAdjustDuration:(BOOL)duration;	// 0x3620b225
// declared property setter: - (void)setBackgroundCGColor:(CGColorRef)color;	// 0x3620a0a5
- (void)setBackgroundColorString:(id)string;	// 0x3620a069
// converted property setter: - (void)setContainer:(id)container;	// 0x3620cf91
// converted property setter: - (void)setDuration:(double)duration;	// 0x36209909
// converted property setter: - (void)setDurationPadding:(double)padding;	// 0x3620e4b9
// declared property setter: - (void)setInitialState:(id)state;	// 0x3620a50d
- (void)setIsDocumentLayerGroup:(BOOL)group;	// 0x36211599
// converted property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x36209a99
// converted property setter: - (void)setLastSlideUsed:(int)used;	// 0x36211491
- (void)setLayer:(id)layer forKey:(id)key;	// 0x3620b2ed
// declared property setter: - (void)setLoopingMode:(int)mode;	// 0x36209fb9
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x3620ad89
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x3620b9cd
// converted property setter: - (void)setParent:(id)parent;	// 0x3620cc49
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x3620af29
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x3620b099
// converted property setter: - (void)setPlug:(id)plug;	// 0x3620d0e9
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x3620ba91
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x3620bbf5
// converted property setter: - (void)setScale:(float)scale;	// 0x3620bed1
// converted property setter: - (void)setSize:(CGSize)size;	// 0x3620bcb9
// converted property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x36209b05
- (unsigned)setStyleID:(id)anId;	// 0x36207ff9
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x36209a19
- (void)setUsedAllPaths:(BOOL)paths;	// 0x36211471
// declared property setter: - (void)setVideoPaths:(id)paths;	// 0x3620ab01
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x3620bd69
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x3620be1d
// converted property setter: - (void)setZIndex:(int)index;	// 0x3620bfe9
// converted property setter: - (void)setZPosition:(float)position;	// 0x3620bb41
// converted property getter: - (CGSize)size;	// 0x3620bc89
// converted property getter: - (BOOL)startsPaused;	// 0x36209ae1
- (id)styleID;	// 0x36207fcd
// converted property getter: - (double)timeIn;	// 0x362099f9
// declared property getter: - (id)uuid;	// 0x3620a4cd
- (id)valueInLayersWithName:(id)name;	// 0x362118f1
- (double)videoDuration;	// 0x362096e9
// declared property getter: - (id)videoPaths;	// 0x3620a84d
// converted property getter: - (float)xRotationAngle;	// 0x3620bd49
// converted property getter: - (float)yRotationAngle;	// 0x3620bdfd
// converted property getter: - (int)zIndex;	// 0x3620bf65
// converted property getter: - (float)zPosition;	// 0x3620bb21
@end


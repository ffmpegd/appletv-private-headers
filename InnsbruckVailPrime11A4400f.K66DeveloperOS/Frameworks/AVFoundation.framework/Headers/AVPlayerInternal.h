/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVPixelBufferAttributeMediator, NSMutableDictionary, NSMutableSet, NSError, NSArray, NSDictionary, NSString, AVAudioSessionMediaPlayerOnly, AVWeakReference, AVPropertyStorage, AVPlayerItem;
@protocol OS_dispatch_queue;

@interface AVPlayerInternal : NSObject {
	AVWeakReference *weakReference;	// 4 = 0x4
	OpaqueFigPlayer *figPlayer;	// 8 = 0x8
	OpaqueCMClock *figMasterClock;	// 12 = 0xc
	AVPropertyStorage *propertyStorage;	// 16 = 0x10
	AVPixelBufferAttributeMediator *pixelBufferAttributeMediator;	// 20 = 0x14
	NSMutableDictionary *pendingFigPlayerProperties;	// 24 = 0x18
	NSArray *expectedAssetTypes;	// 28 = 0x1c
	AVPlayerItem *currentItem;	// 32 = 0x20
	AVPlayerItem *lastItem;	// 36 = 0x24
	OpaqueFigPlaybackItem *figPlaybackItemToIdentifyNextCurrentItem;	// 40 = 0x28
	NSMutableSet *items;	// 44 = 0x2c
	NSObject<OS_dispatch_queue> *layersQ;	// 48 = 0x30
	NSMutableSet *caLayers;	// 52 = 0x34
	NSString *externalPlaybackVideoGravity;	// 56 = 0x38
	int status;	// 60 = 0x3c
	NSError *error;	// 64 = 0x40
	NSObject<OS_dispatch_queue> *stateDispatchQueue;	// 68 = 0x44
	NSArray *displaysUsedForPlayback;	// 72 = 0x48
	BOOL needsToCreateFigPlayer;	// 76 = 0x4c
	BOOL logPerformanceData;	// 77 = 0x4d
	NSDictionary *cachedFigMediaSelectionCriteriaProperty;	// 80 = 0x50
	BOOL reevaluateBackgroundPlayback;	// 84 = 0x54
	BOOL hostApplicationInForeground;	// 85 = 0x55
	BOOL hadAssociatedOnscreenPlayerLayerWhenSuspended;	// 86 = 0x56
	BOOL iapdExtendedModeIsActive;	// 87 = 0x57
	AVAudioSessionMediaPlayerOnly *audioSessionMediaPlayerOnly;	// 88 = 0x58
	NSDictionary *vibrationPattern;	// 92 = 0x5c
	OpaqueFigSimpleMutex *prerollIDMutex;	// 96 = 0x60
	int nextPrerollIDToGenerate;	// 100 = 0x64
	int pendingPrerollID;	// 104 = 0x68
	id prerollCompletionHandler;	// 108 = 0x6c
	NSObject<OS_dispatch_queue> *subtitleQueue;	// 112 = 0x70
	NSDictionary *currentSubtitlesPayload;	// 116 = 0x74
	BOOL autoSwitchStreamVariants;	// 120 = 0x78
	BOOL preparesItemsForPlaybackAsynchronously;	// 121 = 0x79
}
@end


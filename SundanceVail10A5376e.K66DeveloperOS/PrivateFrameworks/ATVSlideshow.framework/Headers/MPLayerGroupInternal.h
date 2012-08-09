/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSRecursiveLock, NSString, NSDictionary, NSMutableDictionary;

@interface MPLayerGroupInternal : NSObject {
	double numberOfLoops;	// 4 = 0x4
	int loopingMode;	// 12 = 0xc
	double durationPadding;	// 16 = 0x10
	double duration;	// 24 = 0x18
	double timeIn;	// 32 = 0x20
	double phaseInDuration;	// 40 = 0x28
	double phaseOutDuration;	// 48 = 0x30
	NSString *backgroundAudioID;	// 56 = 0x38
	CGColorRef backgroundColor;	// 60 = 0x3c
	NSDictionary *authoredVersionInfo;	// 64 = 0x40
	int sendLiveNotification;	// 68 = 0x44
	NSRecursiveLock *liveLock;	// 72 = 0x48
	BOOL autoAdjustDuration;	// 76 = 0x4c
	BOOL isDocumentLayerGroup;	// 77 = 0x4d
	BOOL isTriggered;	// 78 = 0x4e
	BOOL startsPaused;	// 79 = 0x4f
	BOOL usedAllPaths;	// 80 = 0x50
	float opacity;	// 84 = 0x54
	CGPoint position;	// 88 = 0x58
	float zPosition;	// 96 = 0x60
	CGSize size;	// 100 = 0x64
	float rotationAngle;	// 108 = 0x6c
	float xRotationAngle;	// 112 = 0x70
	float yRotationAngle;	// 116 = 0x74
	float scale;	// 120 = 0x78
	int zIndex;	// 124 = 0x7c
	NSString *uuid;	// 128 = 0x80
	NSMutableDictionary *layerKeyDictionary;	// 132 = 0x84
	NSDictionary *initialState;	// 136 = 0x88
}
@property(retain, nonatomic) NSDictionary *authoredVersionInfo;	// G=0x36205d89; S=0x36205d99; @synthesize
@property(assign, nonatomic) BOOL autoAdjustDuration;	// G=0x36205de9; S=0x36205df9; @synthesize
@property(retain, nonatomic) NSString *backgroundAudioID;	// G=0x36205d39; S=0x36205d49; @synthesize
@property(assign, nonatomic) CGColorRef backgroundColor;	// G=0x36205d79; S=0x36205bc9; @synthesize
@property(assign, nonatomic) double duration;	// G=0x36205c49; S=0x36205c61; @synthesize
@property(assign, nonatomic) double durationPadding;	// G=0x36205c1d; S=0x36205c35; @synthesize
@property(retain, nonatomic) NSDictionary *initialState;	// G=0x36205fa1; S=0x36205fb1; @synthesize
@property(assign, nonatomic) BOOL isDocumentLayerGroup;	// G=0x36205e09; S=0x36205e19; @synthesize
@property(assign, nonatomic) BOOL isTriggered;	// G=0x36205ca1; S=0x36205cb1; @synthesize
@property(retain, nonatomic) NSMutableDictionary *layerKeyDictionary;	// G=0x36205f81; S=0x36205f91; @synthesize
@property(retain, nonatomic) NSRecursiveLock *liveLock;	// G=0x36205dc9; S=0x36205dd9; @synthesize
@property(assign, nonatomic) int loopingMode;	// G=0x36205d59; S=0x36205d69; @synthesize
@property(assign, nonatomic) double numberOfLoops;	// G=0x36205bf1; S=0x36205c09; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x36205e29; S=0x36205e39; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x36205ce1; S=0x36205cf9; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x36205d0d; S=0x36205d25; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x36205e49; S=0x36205e61; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x36205ec1; S=0x36205ed1; @synthesize
@property(assign, nonatomic) float scale;	// G=0x36205f21; S=0x36205f31; @synthesize
@property(assign, nonatomic) int sendLiveNotification;	// G=0x36205da9; S=0x36205db9; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x36205e95; S=0x36205ead; @synthesize
@property(assign, nonatomic) BOOL startsPaused;	// G=0x36205cc1; S=0x36205cd1; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x36205c75; S=0x36205c8d; @synthesize
@property(assign, nonatomic) BOOL usedAllPaths;	// G=0x36205fc1; S=0x36205fd1; @synthesize
@property(retain, nonatomic) NSString *uuid;	// G=0x36205f41; S=0x36205f51; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x36205ee1; S=0x36205ef1; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x36205f01; S=0x36205f11; @synthesize
@property(assign, nonatomic) int zIndex;	// G=0x36205f61; S=0x36205f71; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x36205e75; S=0x36205e85; @synthesize
// declared property getter: - (id)authoredVersionInfo;	// 0x36205d89
// declared property getter: - (BOOL)autoAdjustDuration;	// 0x36205de9
// declared property getter: - (id)backgroundAudioID;	// 0x36205d39
// declared property getter: - (CGColorRef)backgroundColor;	// 0x36205d79
- (void)dealloc;	// 0x36205add
// declared property getter: - (double)duration;	// 0x36205c49
// declared property getter: - (double)durationPadding;	// 0x36205c1d
- (void)finalize;	// 0x36205a99
// declared property getter: - (id)initialState;	// 0x36205fa1
// declared property getter: - (BOOL)isDocumentLayerGroup;	// 0x36205e09
// declared property getter: - (BOOL)isTriggered;	// 0x36205ca1
// declared property getter: - (id)layerKeyDictionary;	// 0x36205f81
// declared property getter: - (id)liveLock;	// 0x36205dc9
// declared property getter: - (int)loopingMode;	// 0x36205d59
// declared property getter: - (double)numberOfLoops;	// 0x36205bf1
// declared property getter: - (float)opacity;	// 0x36205e29
// declared property getter: - (double)phaseInDuration;	// 0x36205ce1
// declared property getter: - (double)phaseOutDuration;	// 0x36205d0d
// declared property getter: - (CGPoint)position;	// 0x36205e49
// declared property getter: - (float)rotationAngle;	// 0x36205ec1
// declared property getter: - (float)scale;	// 0x36205f21
// declared property getter: - (int)sendLiveNotification;	// 0x36205da9
// declared property setter: - (void)setAuthoredVersionInfo:(id)info;	// 0x36205d99
// declared property setter: - (void)setAutoAdjustDuration:(BOOL)duration;	// 0x36205df9
// declared property setter: - (void)setBackgroundAudioID:(id)anId;	// 0x36205d49
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x36205bc9
// declared property setter: - (void)setDuration:(double)duration;	// 0x36205c61
// declared property setter: - (void)setDurationPadding:(double)padding;	// 0x36205c35
// declared property setter: - (void)setInitialState:(id)state;	// 0x36205fb1
// declared property setter: - (void)setIsDocumentLayerGroup:(BOOL)group;	// 0x36205e19
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x36205cb1
// declared property setter: - (void)setLayerKeyDictionary:(id)dictionary;	// 0x36205f91
// declared property setter: - (void)setLiveLock:(id)lock;	// 0x36205dd9
// declared property setter: - (void)setLoopingMode:(int)mode;	// 0x36205d69
// declared property setter: - (void)setNumberOfLoops:(double)loops;	// 0x36205c09
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x36205e39
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x36205cf9
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x36205d25
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x36205e61
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x36205ed1
// declared property setter: - (void)setScale:(float)scale;	// 0x36205f31
// declared property setter: - (void)setSendLiveNotification:(int)notification;	// 0x36205db9
// declared property setter: - (void)setSize:(CGSize)size;	// 0x36205ead
// declared property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x36205cd1
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x36205c8d
// declared property setter: - (void)setUsedAllPaths:(BOOL)paths;	// 0x36205fd1
// declared property setter: - (void)setUuid:(id)uuid;	// 0x36205f51
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x36205ef1
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x36205f11
// declared property setter: - (void)setZIndex:(int)index;	// 0x36205f71
// declared property setter: - (void)setZPosition:(float)position;	// 0x36205e85
// declared property getter: - (CGSize)size;	// 0x36205e95
// declared property getter: - (BOOL)startsPaused;	// 0x36205cc1
// declared property getter: - (double)timeIn;	// 0x36205c75
// declared property getter: - (BOOL)usedAllPaths;	// 0x36205fc1
// declared property getter: - (id)uuid;	// 0x36205f41
// declared property getter: - (float)xRotationAngle;	// 0x36205ee1
// declared property getter: - (float)yRotationAngle;	// 0x36205f01
// declared property getter: - (int)zIndex;	// 0x36205f61
// declared property getter: - (float)zPosition;	// 0x36205e75
@end

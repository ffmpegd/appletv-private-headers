/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "ScreenReaderCore-Structs.h"
#import <NSObject.h> // Unknown library

@class SCRCTargetSelectorTimer, SCRCGestureFactory;

@interface SCRCGestureFactory : NSObject {
	float _stallDistance;	// 4 = 0x4
	float _maxDimension;	// 8 = 0x8
	float _thumbRegion;	// 12 = 0xc
	int _orientation;	// 16 = 0x10
	int _directions[7];	// 20 = 0x14
	CGPoint _axisFlipper;	// 48 = 0x30
	float _scaledTrackingDistance;	// 56 = 0x38
	BOOL _setTrackingTimer;	// 60 = 0x3c
	float _flickVelocityThreshold;	// 64 = 0x40
	double _tapVelocityThreshold;	// 68 = 0x44
	double _echoWaitTime;	// 76 = 0x4c
	CGRect _mainFrame;	// 84 = 0x54
	CGRect _gutterFrame;	// 100 = 0x64
	double _lastTime;	// 116 = 0x74
	double _lastDownTime;	// 124 = 0x7c
	double _lastGutterDownTime;	// 132 = 0x84
	float _lastDegrees;	// 140 = 0x8c
	float _startDegrees;	// 144 = 0x90
	float _startDistance;	// 148 = 0x94
	BOOL _startedInGutter;	// 152 = 0x98
	double _requireDelayBeforeTracking;	// 156 = 0x9c
	BOOL _requireUp;	// 164 = 0xa4
	BOOL _thumbRejectionEnabled;	// 165 = 0xa5
	float _thumbRejectionDistance;	// 168 = 0xa8
	int _state;	// 172 = 0xac
	int _previousState;	// 176 = 0xb0
	int _direction;	// 180 = 0xb4
	float _directionalSlope;	// 184 = 0xb8
	SCRCFingerState _finger[2];	// 188 = 0xbc
	unsigned _absoluteFingerCount;	// 2036 = 0x7f4
	unsigned short _fingerCount;	// 2040 = 0x7f8
	unsigned short _lastFingerCount;	// 2042 = 0x7fa
	float _distance;	// 2044 = 0x7fc
	unsigned _tapCount;	// 2048 = 0x800
	CGRect _tapFrame;	// 2052 = 0x804
	CGRect _tapMultiFrame;	// 2068 = 0x814
	struct {
		id track;
		id tap;
		id gutterUp;
		id splitTap;
	} _delegate;	// 2084 = 0x824
	SCRCTargetSelectorTimer *_trackingTimer;	// 2100 = 0x834
	struct {
		BOOL down;
		BOOL dead;
		BOOL gutter;
		unsigned current;
		unsigned digits;
		unsigned count;
		CGRect frame;
		CGPoint location[5];
		CGPoint locationPerTap[5];
		unsigned digitsPerTap;
		double thisTime;
		double lastTime;
	} _tap;	// 2104 = 0x838
	SCRCTargetSelectorTimer *_tapTimer;	// 2236 = 0x8bc
	SCRCTargetSelectorTimer *_gutterUpTimer;	// 2240 = 0x8c0
	struct {
		SCRCGestureFactory *factory;
		BOOL isSplitting;
		BOOL isTapping;
		BOOL fastTrack;
		BOOL tapDead;
		BOOL timedOut;
		BOOL active;
		unsigned fingerIdentifier;
		double fingerDownTime;
		CGPoint startTapLocation;
		CGPoint lastTapLocation;
		CGPoint primaryFingerLocation;
		float tapDistance;
		int state;
	} _split;	// 2244 = 0x8c4
}
@property(readonly, assign) unsigned absoluteFingerCount;	// G=0x323a7789; converted property
@property(readonly, assign) int direction;	// G=0x323a8939; converted property
@property(readonly, assign) float directionalSlope;	// G=0x323a774d; converted property
@property(readonly, assign) float distance;	// G=0x323a89cd; converted property
@property(assign) float flickSpeed;	// G=0x323a7645; S=0x323a75ed; converted property
@property(readonly, assign) CGRect mainFrame;	// G=0x323a7729; converted property
@property(assign) int orientation;	// G=0x323a7719; S=0x323a7955; converted property
@property(readonly, assign) unsigned tapCount;	// G=0x323a77a9; converted property
@property(readonly, assign) CGRect tapFrame;	// G=0x323a77c9; converted property
@property(assign) float tapSpeed;	// G=0x323a76e1; S=0x323a7675; converted property
@property(assign, nonatomic) BOOL thumbRejectionEnabled;	// G=0x323a7911; S=0x323a7921; @synthesize=_thumbRejectionEnabled
- (id)initWithSize:(CGSize)size delegate:(id)delegate;	// 0x323a7931
- (id)initWithSize:(CGSize)size delegate:(id)delegate threadKey:(id)key;	// 0x323a8a2d
- (CGRect)_currentTapRect;	// 0x323b002d
- (void)_down:(id)down;	// 0x323ae905
- (void)_drag:(id)drag;	// 0x323a92b5
- (void)_enterTrackingMode:(id)mode;	// 0x323a7ae1
- (void)_handleGutterUp;	// 0x323a7b55
- (BOOL)_handleSplitEvent:(id)event;	// 0x323af3e5
- (BOOL)_handleSplitTap;	// 0x323afa51
- (void)_handleTap;	// 0x323afbf5
- (void)_processUpAndPost:(BOOL)post;	// 0x323a7b69
- (void)_up;	// 0x323a7c19
- (void)_updateMultiTapFrame;	// 0x323aff59
- (void)_updateStartWithPoint:(CGPoint)point time:(double)time;	// 0x323afafd
- (void)_updateTapState;	// 0x323afdfd
// converted property getter: - (unsigned)absoluteFingerCount;	// 0x323a7789
- (void)dealloc;	// 0x323b0121
// converted property getter: - (int)direction;	// 0x323a8939
// converted property getter: - (float)directionalSlope;	// 0x323a774d
// converted property getter: - (float)distance;	// 0x323a89cd
- (CGPoint)endLocation;	// 0x323a8de5
- (unsigned)fingerCount;	// 0x323a7799
// converted property getter: - (float)flickSpeed;	// 0x323a7645
- (int)gestureState;	// 0x323a775d
- (id)gestureStateString;	// 0x323a8a15
- (void)handleGestureEvent:(id)event;	// 0x323aeea9
// converted property getter: - (CGRect)mainFrame;	// 0x323a7729
- (CGRect)multiTapFrame;	// 0x323a7829
// converted property getter: - (int)orientation;	// 0x323a7719
- (CGPoint)rawLocation;	// 0x323a91a5
- (void)reset;	// 0x323a88d9
// converted property setter: - (void)setFlickSpeed:(float)speed;	// 0x323a75ed
// converted property setter: - (void)setOrientation:(int)orientation;	// 0x323a7955
// converted property setter: - (void)setTapSpeed:(float)speed;	// 0x323a7675
// declared property setter: - (void)setThumbRejectionEnabled:(BOOL)enabled;	// 0x323a7921
- (CGPoint)startLocation;	// 0x323a8fc5
// converted property getter: - (unsigned)tapCount;	// 0x323a77a9
// converted property getter: - (CGRect)tapFrame;	// 0x323a77c9
- (double)tapInterval;	// 0x323a78f1
- (BOOL)tapIsDown;	// 0x323a77b9
- (CGPoint)tapPoint;	// 0x323a8da5
- (CGPoint)tapPointWeightedToSides;	// 0x323a7889
// converted property getter: - (float)tapSpeed;	// 0x323a76e1
// declared property getter: - (BOOL)thumbRejectionEnabled;	// 0x323a7911
- (float)vector;	// 0x323a920d
- (float)velocity;	// 0x323a8985
@end


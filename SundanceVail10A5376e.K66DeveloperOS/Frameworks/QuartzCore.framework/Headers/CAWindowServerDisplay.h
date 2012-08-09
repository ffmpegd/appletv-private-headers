/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSSet;

@interface CAWindowServerDisplay : NSObject {
	void *_impl;	// 4 = 0x4
}
@property(copy) NSString *TVMode;	// G=0x33d7a4ed; S=0x33d7a479; 
@property(copy) NSString *TVSignalType;	// G=0x33d7a5d1; S=0x33d7a529; 
@property(assign) BOOL allowsVirtualModes;	// G=0x33d7a3c1; S=0x33d7a3e1; 
@property(assign, getter=isBlanked) BOOL blanked;	// G=0x33d79fbd; S=0x33d79f9d; 
@property(readonly, assign) CGRect bounds;	// G=0x33d78ce9; 
@property(readonly, assign) CAWindowServerDisplay *cloneMaster;	// G=0x33d79f7d; 
@property(readonly, assign) NSSet *clones;	// G=0x33d797f9; 
@property(copy, nonatomic) NSString *colorMode;	// G=0x33d7a2d5; S=0x33d7a331; 
@property(assign) float contrast;	// G=0x33d7a1a9; S=0x33d7a189; 
@property(readonly, assign) NSString *deviceName;	// G=0x33d78db1; 
@property(readonly, assign) unsigned displayId;	// G=0x33d78dcd; 
@property(assign) float idealRefreshRate;	// G=0x33d7a271; S=0x33d7a251; 
@property(assign) BOOL invertsColors;	// G=0x33d7a161; S=0x33d7a141; 
@property(assign) float maximumRefreshRate;	// G=0x33d7a22d; S=0x33d7a20d; 
@property(assign) float minimumRefreshRate;	// G=0x33d7a1e9; S=0x33d7a1c9; 
@property(assign, getter=isMirroringEnabled) BOOL mirroringEnabled;	// G=0x33d7a41d; S=0x33d7a401; 
@property(readonly, assign) NSString *name;	// G=0x33d78d99; 
@property(copy) NSString *orientation;	// G=0x33d7a091; S=0x33d79ff5; 
@property(assign) float overscanAmount;	// G=0x33d7a11d; S=0x33d7a0fd; 
@property(readonly, assign) unsigned rendererFlags;	// G=0x33d78de9; 
@property(assign) int tag;	// G=0x33d7a45d; S=0x33d7a441; 
@property(assign) BOOL usesPreferredModeRefreshRate;	// G=0x33d7a2b5; S=0x33d7a295; 
// declared property getter: - (id)TVMode;	// 0x33d7a4ed
// declared property getter: - (id)TVSignalType;	// 0x33d7a5d1
- (id)_initWithCADisplayServer:(Server *)cadisplayServer;	// 0x33d78c21
- (void)addClone:(id)clone;	// 0x33d79ca5
- (void)addClone:(id)clone options:(id)options;	// 0x33d79a59
// declared property getter: - (BOOL)allowsVirtualModes;	// 0x33d7a3c1
// declared property getter: - (CGRect)bounds;	// 0x33d78ce9
- (unsigned)clientPortAtPosition:(CGPoint)position;	// 0x33d78ef9
- (unsigned)clientPortOfContextId:(unsigned)contextId;	// 0x33d78f31
// declared property getter: - (id)cloneMaster;	// 0x33d79f7d
// declared property getter: - (id)clones;	// 0x33d797f9
// declared property getter: - (id)colorMode;	// 0x33d7a2d5
- (unsigned)contextIdAtPosition:(CGPoint)position;	// 0x33d78ec5
- (unsigned)contextIdHostingContextId:(unsigned)anId;	// 0x33d78f61
- (id)contextIdsWithClientPort:(unsigned)clientPort;	// 0x33d78e11
// declared property getter: - (float)contrast;	// 0x33d7a1a9
- (CGPoint)convertPoint:(CGPoint)point fromContextId:(unsigned)contextId;	// 0x33d796f1
- (CGPoint)convertPoint:(CGPoint)point toContextId:(unsigned)contextId;	// 0x33d790c9
- (void)dealloc;	// 0x33d78c99
- (id)description;	// 0x33d7a631
// declared property getter: - (id)deviceName;	// 0x33d78db1
// declared property getter: - (unsigned)displayId;	// 0x33d78dcd
- (CGRect)frameOfContextId:(unsigned)contextId;	// 0x33d78fa1
// declared property getter: - (float)idealRefreshRate;	// 0x33d7a271
- (void)invalidate;	// 0x33d78c65
// declared property getter: - (BOOL)invertsColors;	// 0x33d7a161
// declared property getter: - (BOOL)isBlanked;	// 0x33d79fbd
// declared property getter: - (BOOL)isMirroringEnabled;	// 0x33d7a41d
// declared property getter: - (float)maximumRefreshRate;	// 0x33d7a22d
// declared property getter: - (float)minimumRefreshRate;	// 0x33d7a1e9
// declared property getter: - (id)name;	// 0x33d78d99
// declared property getter: - (id)orientation;	// 0x33d7a091
// declared property getter: - (float)overscanAmount;	// 0x33d7a11d
- (void)removeAllClones;	// 0x33d79dd9
- (void)removeClone:(id)clone;	// 0x33d79cb9
// declared property getter: - (unsigned)rendererFlags;	// 0x33d78de9
// declared property setter: - (void)setAllowsVirtualModes:(BOOL)modes;	// 0x33d7a3e1
// declared property setter: - (void)setBlanked:(BOOL)blanked;	// 0x33d79f9d
// declared property setter: - (void)setColorMode:(id)mode;	// 0x33d7a331
// declared property setter: - (void)setContrast:(float)contrast;	// 0x33d7a189
// declared property setter: - (void)setIdealRefreshRate:(float)rate;	// 0x33d7a251
// declared property setter: - (void)setInvertsColors:(BOOL)colors;	// 0x33d7a141
// declared property setter: - (void)setMaximumRefreshRate:(float)rate;	// 0x33d7a20d
// declared property setter: - (void)setMinimumRefreshRate:(float)rate;	// 0x33d7a1c9
// declared property setter: - (void)setMirroringEnabled:(BOOL)enabled;	// 0x33d7a401
// declared property setter: - (void)setOrientation:(id)orientation;	// 0x33d79ff5
// declared property setter: - (void)setOverscanAmount:(float)amount;	// 0x33d7a0fd
// declared property setter: - (void)setTVMode:(id)mode;	// 0x33d7a479
// declared property setter: - (void)setTVSignalType:(id)type;	// 0x33d7a529
// declared property setter: - (void)setTag:(int)tag;	// 0x33d7a441
// declared property setter: - (void)setUsesPreferredModeRefreshRate:(BOOL)rate;	// 0x33d7a295
// declared property getter: - (int)tag;	// 0x33d7a45d
// declared property getter: - (BOOL)usesPreferredModeRefreshRate;	// 0x33d7a2b5
- (void)willUnblank;	// 0x33d79fdd
@end

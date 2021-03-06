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
@private
	void *_impl;	// 4 = 0x4
}
@property(copy) NSString *TVMode;	// G=0x33f2a159; S=0x33f2a911; 
@property(copy) NSString *TVSignalType;	// G=0x33f2a195; S=0x33f2a869; 
@property(assign) BOOL allowsVirtualModes;	// G=0x33f2a11d; S=0x33f2a9a1; 
@property(assign, getter=isBlanked) BOOL blanked;	// G=0x33f29f8d; S=0x33f2ac41; 
@property(readonly, assign) CGRect bounds;	// G=0x33f2b551; 
@property(readonly, assign) CAWindowServerDisplay *cloneMaster;	// G=0x33f2ac69; 
@property(readonly, assign) NSSet *clones;	// G=0x33f2b15d; 
@property(copy, nonatomic) NSString *colorMode;	// G=0x33f2a0c5; S=0x33f2a9c9; 
@property(assign) float contrast;	// G=0x33f29ff9; S=0x33f2aadd; 
@property(readonly, assign) NSString *deviceName;	// G=0x33f29f2d; 
@property(readonly, assign) unsigned displayId;	// G=0x33f29f49; 
@property(assign) float idealRefreshRate;	// G=0x33f2a07d; S=0x33f2aa7d; 
@property(assign) BOOL invertsColors;	// G=0x33f29fd5; S=0x33f2aafd; 
@property(assign) float maximumRefreshRate;	// G=0x33f2a055; S=0x33f2aa9d; 
@property(assign) float minimumRefreshRate;	// G=0x33f2a02d; S=0x33f2aabd; 
@property(assign, getter=isMirroringEnabled) BOOL mirroringEnabled;	// G=0x33f2a789; S=0x33f2a76d; 
@property(readonly, assign) NSString *name;	// G=0x33f29f15; 
@property(copy) NSString *orientation;	// G=0x33f2ab45; S=0x33f2aba9; 
@property(assign) float overscanAmount;	// G=0x33f29fad; S=0x33f2ab25; 
@property(readonly, assign) unsigned rendererFlags;	// G=0x33f29f65; 
@property(assign) int tag;	// G=0x33f2a13d; S=0x33f2a97d; 
@property(assign) BOOL usesPreferredModeRefreshRate;	// G=0x33f2a0a5; S=0x33f2aa55; 
// declared property getter: - (id)TVMode;	// 0x33f2a159
// declared property getter: - (id)TVSignalType;	// 0x33f2a195
- (id)_initWithCADisplayServer:(Server *)cadisplayServer;	// 0x33f2a7ad
- (void)addClone:(id)clone;	// 0x33f2a759
- (void)addClone:(id)clone options:(id)options;	// 0x33f2af0d
// declared property getter: - (BOOL)allowsVirtualModes;	// 0x33f2a11d
// declared property getter: - (CGRect)bounds;	// 0x33f2b551
- (unsigned)clientPortAtPosition:(CGPoint)position;	// 0x33e80ca1
- (unsigned)clientPortOfContextId:(unsigned)contextId;	// 0x33f2b479
// declared property getter: - (id)cloneMaster;	// 0x33f2ac69
// declared property getter: - (id)clones;	// 0x33f2b15d
// declared property getter: - (id)colorMode;	// 0x33f2a0c5
- (unsigned)contextIdAtPosition:(CGPoint)position;	// 0x33e7a1f1
- (unsigned)contextIdHostingContextId:(unsigned)anId;	// 0x33f2b43d
- (id)contextIdsWithClientPort:(unsigned)clientPort;	// 0x33f2b4a9
// declared property getter: - (float)contrast;	// 0x33f29ff9
- (CGPoint)convertPoint:(CGPoint)point fromContextId:(unsigned)contextId;	// 0x33f2b2cd
- (CGPoint)convertPoint:(CGPoint)point toContextId:(unsigned)contextId;	// 0x33e80cd9
- (void)dealloc;	// 0x33f2b5f1
- (id)description;	// 0x33f2a7f1
// declared property getter: - (id)deviceName;	// 0x33f29f2d
// declared property getter: - (unsigned)displayId;	// 0x33f29f49
- (CGRect)frameOfContextId:(unsigned)contextId;	// 0x33f2b309
// declared property getter: - (float)idealRefreshRate;	// 0x33f2a07d
- (void)invalidate;	// 0x33f29edd
// declared property getter: - (BOOL)invertsColors;	// 0x33f29fd5
// declared property getter: - (BOOL)isBlanked;	// 0x33f29f8d
// declared property getter: - (BOOL)isMirroringEnabled;	// 0x33f2a789
// declared property getter: - (float)maximumRefreshRate;	// 0x33f2a055
// declared property getter: - (float)minimumRefreshRate;	// 0x33f2a02d
// declared property getter: - (id)name;	// 0x33f29f15
// declared property getter: - (id)orientation;	// 0x33f2ab45
// declared property getter: - (float)overscanAmount;	// 0x33f29fad
- (void)removeAllClones;	// 0x33f2ac91
- (void)removeClone:(id)clone;	// 0x33f2ae35
// declared property getter: - (unsigned)rendererFlags;	// 0x33f29f65
// declared property setter: - (void)setAllowsVirtualModes:(BOOL)modes;	// 0x33f2a9a1
// declared property setter: - (void)setBlanked:(BOOL)blanked;	// 0x33f2ac41
// declared property setter: - (void)setColorMode:(id)mode;	// 0x33f2a9c9
// declared property setter: - (void)setContrast:(float)contrast;	// 0x33f2aadd
// declared property setter: - (void)setIdealRefreshRate:(float)rate;	// 0x33f2aa7d
// declared property setter: - (void)setInvertsColors:(BOOL)colors;	// 0x33f2aafd
// declared property setter: - (void)setMaximumRefreshRate:(float)rate;	// 0x33f2aa9d
// declared property setter: - (void)setMinimumRefreshRate:(float)rate;	// 0x33f2aabd
// declared property setter: - (void)setMirroringEnabled:(BOOL)enabled;	// 0x33f2a76d
// declared property setter: - (void)setOrientation:(id)orientation;	// 0x33f2aba9
// declared property setter: - (void)setOverscanAmount:(float)amount;	// 0x33f2ab25
// declared property setter: - (void)setTVMode:(id)mode;	// 0x33f2a911
// declared property setter: - (void)setTVSignalType:(id)type;	// 0x33f2a869
// declared property setter: - (void)setTag:(int)tag;	// 0x33f2a97d
// declared property setter: - (void)setUsesPreferredModeRefreshRate:(BOOL)rate;	// 0x33f2aa55
// declared property getter: - (int)tag;	// 0x33f2a13d
// declared property getter: - (BOOL)usesPreferredModeRefreshRate;	// 0x33f2a0a5
@end


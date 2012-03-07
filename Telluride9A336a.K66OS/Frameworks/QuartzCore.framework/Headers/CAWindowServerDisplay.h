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
@property(copy) NSString *TVMode;	// G=0x3616d159; S=0x3616d911; 
@property(copy) NSString *TVSignalType;	// G=0x3616d195; S=0x3616d869; 
@property(assign) BOOL allowsVirtualModes;	// G=0x3616d11d; S=0x3616d9a1; 
@property(assign, getter=isBlanked) BOOL blanked;	// G=0x3616cf8d; S=0x3616dc41; 
@property(readonly, assign) CGRect bounds;	// G=0x3616e551; 
@property(readonly, assign) CAWindowServerDisplay *cloneMaster;	// G=0x3616dc69; 
@property(readonly, assign) NSSet *clones;	// G=0x3616e15d; 
@property(copy, nonatomic) NSString *colorMode;	// G=0x3616d0c5; S=0x3616d9c9; 
@property(assign) float contrast;	// G=0x3616cff9; S=0x3616dadd; 
@property(readonly, assign) NSString *deviceName;	// G=0x3616cf2d; 
@property(readonly, assign) unsigned displayId;	// G=0x3616cf49; 
@property(assign) float idealRefreshRate;	// G=0x3616d07d; S=0x3616da7d; 
@property(assign) BOOL invertsColors;	// G=0x3616cfd5; S=0x3616dafd; 
@property(assign) float maximumRefreshRate;	// G=0x3616d055; S=0x3616da9d; 
@property(assign) float minimumRefreshRate;	// G=0x3616d02d; S=0x3616dabd; 
@property(assign, getter=isMirroringEnabled) BOOL mirroringEnabled;	// G=0x3616d789; S=0x3616d76d; 
@property(readonly, assign) NSString *name;	// G=0x3616cf15; 
@property(copy) NSString *orientation;	// G=0x3616db45; S=0x3616dba9; 
@property(assign) float overscanAmount;	// G=0x3616cfad; S=0x3616db25; 
@property(readonly, assign) unsigned rendererFlags;	// G=0x3616cf65; 
@property(assign) int tag;	// G=0x3616d13d; S=0x3616d97d; 
@property(assign) BOOL usesPreferredModeRefreshRate;	// G=0x3616d0a5; S=0x3616da55; 
// declared property getter: - (id)TVMode;	// 0x3616d159
// declared property getter: - (id)TVSignalType;	// 0x3616d195
- (id)_initWithCADisplayServer:(Server *)cadisplayServer;	// 0x3616d7ad
- (void)addClone:(id)clone;	// 0x3616d759
- (void)addClone:(id)clone options:(id)options;	// 0x3616df0d
// declared property getter: - (BOOL)allowsVirtualModes;	// 0x3616d11d
// declared property getter: - (CGRect)bounds;	// 0x3616e551
- (unsigned)clientPortAtPosition:(CGPoint)position;	// 0x360c3ca1
- (unsigned)clientPortOfContextId:(unsigned)contextId;	// 0x3616e479
// declared property getter: - (id)cloneMaster;	// 0x3616dc69
// declared property getter: - (id)clones;	// 0x3616e15d
// declared property getter: - (id)colorMode;	// 0x3616d0c5
- (unsigned)contextIdAtPosition:(CGPoint)position;	// 0x360bd1f1
- (unsigned)contextIdHostingContextId:(unsigned)anId;	// 0x3616e43d
- (id)contextIdsWithClientPort:(unsigned)clientPort;	// 0x3616e4a9
// declared property getter: - (float)contrast;	// 0x3616cff9
- (CGPoint)convertPoint:(CGPoint)point fromContextId:(unsigned)contextId;	// 0x3616e2cd
- (CGPoint)convertPoint:(CGPoint)point toContextId:(unsigned)contextId;	// 0x360c3cd9
- (void)dealloc;	// 0x3616e5f1
- (id)description;	// 0x3616d7f1
// declared property getter: - (id)deviceName;	// 0x3616cf2d
// declared property getter: - (unsigned)displayId;	// 0x3616cf49
- (CGRect)frameOfContextId:(unsigned)contextId;	// 0x3616e309
// declared property getter: - (float)idealRefreshRate;	// 0x3616d07d
- (void)invalidate;	// 0x3616cedd
// declared property getter: - (BOOL)invertsColors;	// 0x3616cfd5
// declared property getter: - (BOOL)isBlanked;	// 0x3616cf8d
// declared property getter: - (BOOL)isMirroringEnabled;	// 0x3616d789
// declared property getter: - (float)maximumRefreshRate;	// 0x3616d055
// declared property getter: - (float)minimumRefreshRate;	// 0x3616d02d
// declared property getter: - (id)name;	// 0x3616cf15
// declared property getter: - (id)orientation;	// 0x3616db45
// declared property getter: - (float)overscanAmount;	// 0x3616cfad
- (void)removeAllClones;	// 0x3616dc91
- (void)removeClone:(id)clone;	// 0x3616de35
// declared property getter: - (unsigned)rendererFlags;	// 0x3616cf65
// declared property setter: - (void)setAllowsVirtualModes:(BOOL)modes;	// 0x3616d9a1
// declared property setter: - (void)setBlanked:(BOOL)blanked;	// 0x3616dc41
// declared property setter: - (void)setColorMode:(id)mode;	// 0x3616d9c9
// declared property setter: - (void)setContrast:(float)contrast;	// 0x3616dadd
// declared property setter: - (void)setIdealRefreshRate:(float)rate;	// 0x3616da7d
// declared property setter: - (void)setInvertsColors:(BOOL)colors;	// 0x3616dafd
// declared property setter: - (void)setMaximumRefreshRate:(float)rate;	// 0x3616da9d
// declared property setter: - (void)setMinimumRefreshRate:(float)rate;	// 0x3616dabd
// declared property setter: - (void)setMirroringEnabled:(BOOL)enabled;	// 0x3616d76d
// declared property setter: - (void)setOrientation:(id)orientation;	// 0x3616dba9
// declared property setter: - (void)setOverscanAmount:(float)amount;	// 0x3616db25
// declared property setter: - (void)setTVMode:(id)mode;	// 0x3616d911
// declared property setter: - (void)setTVSignalType:(id)type;	// 0x3616d869
// declared property setter: - (void)setTag:(int)tag;	// 0x3616d97d
// declared property setter: - (void)setUsesPreferredModeRefreshRate:(BOOL)rate;	// 0x3616da55
// declared property getter: - (int)tag;	// 0x3616d13d
// declared property getter: - (BOOL)usesPreferredModeRefreshRate;	// 0x3616d0a5
@end


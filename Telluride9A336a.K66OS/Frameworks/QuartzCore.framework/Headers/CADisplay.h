/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library

@class CADisplayMode, NSString, NSArray;

@interface CADisplay : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(assign) BOOL allowsVirtualModes;	// G=0x3616c081; S=0x3616c065; 
@property(readonly, assign, nonatomic) NSArray *availableModes;	// G=0x360c7805; 
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x360c775d; 
@property(readonly, assign, getter=isCloned) BOOL cloned;	// G=0x3616bfb1; 
@property(readonly, assign, getter=isCloningSupported) BOOL cloningSupported;	// G=0x3616bf81; 
@property(copy, nonatomic) NSString *colorMode;	// G=0x3616c129; S=0x3616c0b1; 
@property(retain, nonatomic) CADisplayMode *currentMode;	// G=0x360c7211; S=0x3616c1bd; 
@property(readonly, assign, nonatomic) NSString *deviceName;	// G=0x3616be11; 
@property(readonly, assign) unsigned displayId;	// G=0x3616be25; 
@property(readonly, assign, getter=isExternal) BOOL external;	// G=0x3616c035; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x360c676d; 
@property(copy, nonatomic) NSString *overscanAdjustment;	// G=0x360c7489; S=0x360c7511; 
@property(readonly, assign) float overscanAmount;	// G=0x3616bfe1; 
@property(readonly, assign, getter=isOverscanned) BOOL overscanned;	// G=0x360c74e1; 
@property(readonly, assign, nonatomic) CADisplayMode *preferredMode;	// G=0x3616c18d; 
@property(readonly, assign) double refreshRate;	// G=0x3616c009; 
@property(readonly, assign, getter=isSupported) BOOL supported;	// G=0x360c7431; 
@property(readonly, assign) int tag;	// G=0x360c7461; 
@property(readonly, assign) NSString *uniqueId;	// G=0x3616c241; 
+ (id)TVOutDisplay;	// 0x3616bf01
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x360c7801
+ (id)displays;	// 0x360c35e1
+ (id)mainDisplay;	// 0x360edd5d
- (id)_initWithDisplay:(Display *)display;	// 0x360c6719
- (void)_invalidate;	// 0x360f1d9d
// declared property getter: - (BOOL)allowsVirtualModes;	// 0x3616c081
// declared property getter: - (id)availableModes;	// 0x360c7805
// declared property getter: - (CGRect)bounds;	// 0x360c775d
// declared property getter: - (id)colorMode;	// 0x3616c129
// declared property getter: - (id)currentMode;	// 0x360c7211
- (id)description;	// 0x3616bf19
// declared property getter: - (id)deviceName;	// 0x3616be11
// declared property getter: - (unsigned)displayId;	// 0x3616be25
// declared property getter: - (BOOL)isCloned;	// 0x3616bfb1
// declared property getter: - (BOOL)isCloningSupported;	// 0x3616bf81
// declared property getter: - (BOOL)isExternal;	// 0x3616c035
// declared property getter: - (BOOL)isOverscanned;	// 0x360c74e1
// declared property getter: - (BOOL)isSupported;	// 0x360c7431
// declared property getter: - (id)name;	// 0x360c676d
// declared property getter: - (id)overscanAdjustment;	// 0x360c7489
// declared property getter: - (float)overscanAmount;	// 0x3616bfe1
// declared property getter: - (id)preferredMode;	// 0x3616c18d
// declared property getter: - (double)refreshRate;	// 0x3616c009
// declared property setter: - (void)setAllowsVirtualModes:(BOOL)modes;	// 0x3616c065
// declared property setter: - (void)setColorMode:(id)mode;	// 0x3616c0b1
// declared property setter: - (void)setCurrentMode:(id)mode;	// 0x3616c1bd
// declared property setter: - (void)setOverscanAdjustment:(id)adjustment;	// 0x360c7511
// declared property getter: - (int)tag;	// 0x360c7461
// declared property getter: - (id)uniqueId;	// 0x3616c241
- (void)update;	// 0x360c67e9
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CADisplayMode;

__attribute__((visibility("hidden")))
@interface BRDisplayMode : XXUnknownSuperclass {
	CADisplayMode *_displayMode;	// 4 = 0x4
	double _refreshRate;	// 8 = 0x8
	BOOL _isVirtual;	// 16 = 0x10
}
@property(readonly, retain) CADisplayMode *displayMode;	// G=0x2a2965; converted property
@property(readonly, assign) BOOL isVirtual;	// G=0x2a29dd; converted property
@property(readonly, assign) double refreshRate;	// G=0x2a29c5; converted property
- (id)initWithDisplayMode:(id)displayMode refreshRate:(double)rate isVirtual:(BOOL)aVirtual;	// 0x2a275d
- (unsigned long)bitsPerPixel;	// 0x2a29bd
- (void)dealloc;	// 0x2a27f1
- (id)description;	// 0x2a28f9
// converted property getter: - (id)displayMode;	// 0x2a2965
- (unsigned long)height;	// 0x2a299d
- (BOOL)interlaced;	// 0x2a29c1
- (BOOL)isEqual:(id)equal;	// 0x2a283d
// converted property getter: - (BOOL)isVirtual;	// 0x2a29dd
// converted property getter: - (double)refreshRate;	// 0x2a29c5
- (BOOL)safe;	// 0x2a2975
- (BOOL)safeForHardware;	// 0x2a2979
- (unsigned long)width;	// 0x2a297d
@end

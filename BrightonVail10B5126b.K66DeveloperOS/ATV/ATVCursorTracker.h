/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRCursorLayer, BRControl, BRKeyValueObservingRegistry;

__attribute__((visibility("hidden")))
@interface ATVCursorTracker : XXUnknownSuperclass {
	BRControl *_trackedControl;	// 4 = 0x4
	BRCursorLayer *_cursorLayer;	// 8 = 0x8
	BRKeyValueObservingRegistry *_kvoRegistry;	// 12 = 0xc
}
@property(retain, nonatomic) BRCursorLayer *cursorLayer;	// G=0x3dc389; S=0x3dc399; @synthesize=_cursorLayer
@property(retain, nonatomic) BRKeyValueObservingRegistry *kvoRegistry;	// G=0x3dc3c1; S=0x3dc3d1; @synthesize=_kvoRegistry
@property(retain, nonatomic) BRControl *trackedControl;	// G=0x3dc351; S=0x3dc361; @synthesize=_trackedControl
+ (id)trackerWithCursorLayer:(id)cursorLayer;	// 0x3db665
- (id)init;	// 0x3db6bd
- (id)initWithCursorLayer:(id)cursorLayer;	// 0x3db6c9
- (void).cxx_destruct;	// 0x3dc3f9
- (void)_focusChanged:(id)changed;	// 0x3dba91
- (CGRect)_trackedFocusCursorFrame;	// 0x3dc169
// declared property getter: - (id)cursorLayer;	// 0x3dc389
- (void)dealloc;	// 0x3db809
// declared property getter: - (id)kvoRegistry;	// 0x3dc3c1
- (void)layoutCursorLayer;	// 0x3db875
// declared property setter: - (void)setCursorLayer:(id)layer;	// 0x3dc399
// declared property setter: - (void)setKvoRegistry:(id)registry;	// 0x3dc3d1
// declared property setter: - (void)setTrackedControl:(id)control;	// 0x3dc361
// declared property getter: - (id)trackedControl;	// 0x3dc351
@end

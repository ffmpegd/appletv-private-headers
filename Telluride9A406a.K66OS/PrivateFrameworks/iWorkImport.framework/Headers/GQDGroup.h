/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDDrawable.h"
#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"

@class GQDWPExternalTextWrap;

__attribute__((visibility("hidden")))
@interface GQDGroup : GQDDrawable <GQDNameMappable> {
@private
	CFArrayRef mDrawables;	// 36 = 0x24
	GQDWPExternalTextWrap *mExternalTextWrap;	// 40 = 0x28
}
+ (const StateSpec *)stateForReading;	// 0x33c04f11
- (void)dealloc;	// 0x33c0526d
- (CFArrayRef)drawables;	// 0x33c04f1d
- (id)externalTextWrap;	// 0x33c04f2d
@end

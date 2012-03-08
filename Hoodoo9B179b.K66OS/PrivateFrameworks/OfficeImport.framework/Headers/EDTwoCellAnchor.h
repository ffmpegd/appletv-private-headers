/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDAnchor.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EDTwoCellAnchor : EDAnchor {
@private
	EDCellAnchorMarker mFrom;	// 4 = 0x4
	EDCellAnchorMarker mTo;	// 20 = 0x14
	BOOL mIsRelative;	// 36 = 0x24
	int mEditAs;	// 40 = 0x28
}
@property(assign) int editAs;	// G=0x3298490d; S=0x32835b7d; converted property
@property(assign) EDCellAnchorMarker from;	// G=0x3283a7f1; S=0x32835b8d; converted property
@property(assign, getter=isRelative) BOOL relative;	// G=0x3283a7e1; S=0x32835b6d; converted property
@property(assign) EDCellAnchorMarker to;	// G=0x3283aaa1; S=0x32835bb1; converted property
- (id)init;	// 0x32835add
- (id).cxx_construct;	// 0x32835aad
// converted property getter: - (int)editAs;	// 0x3298490d
// converted property getter: - (EDCellAnchorMarker)from;	// 0x3283a7f1
// converted property getter: - (BOOL)isRelative;	// 0x3283a7e1
// converted property setter: - (void)setEditAs:(int)as;	// 0x32835b7d
// converted property setter: - (void)setFrom:(EDCellAnchorMarker)from;	// 0x32835b8d
// converted property setter: - (void)setRelative:(BOOL)relative;	// 0x32835b6d
// converted property setter: - (void)setTo:(EDCellAnchorMarker)to;	// 0x32835bb1
// converted property getter: - (EDCellAnchorMarker)to;	// 0x3283aaa1
@end

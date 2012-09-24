/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawable.h"

@class ODDColorTransform, ODDStyleDefinition, ODDNodePoint;

@interface ODDDiagram : OADDrawable {
	ODDNodePoint *mDocumentPoint;	// 24 = 0x18
	ODDColorTransform *mColorTransform;	// 28 = 0x1c
	ODDStyleDefinition *mStyleDefinition;	// 32 = 0x20
}
@property(retain) id documentPoint;	// G=0x34fb9c01; S=0x34fb8b21; converted property
- (id)init;	// 0x34fb6c31
- (id)colorTransform;	// 0x34fb7265
- (void)dealloc;	// 0x34fbf57d
// converted property getter: - (id)documentPoint;	// 0x34fb9c01
// converted property setter: - (void)setDocumentPoint:(id)point;	// 0x34fb8b21
- (void)setParentTextListStyle:(id)style;	// 0x34fb984d
- (id)styleDefinition;	// 0x34fb6edd
@end

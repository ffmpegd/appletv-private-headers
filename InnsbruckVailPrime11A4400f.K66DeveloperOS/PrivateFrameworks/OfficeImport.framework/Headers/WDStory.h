/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class OADDrawable;

@interface WDStory : NSObject {
	OADDrawable *mHead;	// 4 = 0x4
	BOOL mOle;	// 8 = 0x8
}
@property(assign, getter=isOle) BOOL ole;	// G=0x3194bf39; S=0x3194bf29; converted property
- (id)initWithHead:(id)head;	// 0x3194be15
- (void)dealloc;	// 0x3194be69
- (id)head;	// 0x3194beb5
// converted property getter: - (BOOL)isOle;	// 0x3194bf39
// converted property setter: - (void)setOle:(BOOL)ole;	// 0x3194bf29
- (id)text;	// 0x3194bec5
@end


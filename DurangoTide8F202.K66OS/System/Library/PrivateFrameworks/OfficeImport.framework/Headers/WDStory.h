/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface WDStory : NSObject {
@private
	OADDrawable *mHead;	// 4 = 0x4
	BOOL mOle;	// 8 = 0x8
}
@property(assign, getter=isOle) BOOL ole;	// G=0x31b073ed; S=0x31b073dd; converted property
- (id)initWithHead:(id)head;	// 0x31b0749d
- (void)dealloc;	// 0x31b07455
- (id)head;	// 0x31b073cd
// converted property getter: - (BOOL)isOle;	// 0x31b073ed
// converted property setter: - (void)setOle:(BOOL)ole;	// 0x31b073dd
- (id)text;	// 0x31b073fd
@end


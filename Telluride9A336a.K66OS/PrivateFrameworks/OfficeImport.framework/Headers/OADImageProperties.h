/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADGraphicProperties.h"

@class OADImageFill;

__attribute__((visibility("hidden")))
@interface OADImageProperties : OADGraphicProperties {
@private
	OADImageFill *mImageFill;	// 52 = 0x34
}
@property(retain) id imageFill;	// G=0x34c13251; S=0x34c408b1; converted property
+ (id)defaultProperties;	// 0x34c3f6b5
- (void)dealloc;	// 0x34c0ae39
- (BOOL)hasImageFill;	// 0x34c13281
// converted property getter: - (id)imageFill;	// 0x34c13251
// converted property setter: - (void)setImageFill:(id)fill;	// 0x34c408b1
@end


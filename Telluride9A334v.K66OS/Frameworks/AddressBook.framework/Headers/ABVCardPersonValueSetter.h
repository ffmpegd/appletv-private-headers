/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABVCardValueSetter.h"


@interface ABVCardPersonValueSetter : ABVCardValueSetter {
	void *_person;	// 4 = 0x4
	CFArrayRef _properties;	// 8 = 0x8
}
+ (CFArrayRef)supportedProperties;	// 0x35aa72ad
- (id)initWithPerson:(void *)person;	// 0x35aa7699
- (void)dealloc;	// 0x35aa763d
- (CFArrayRef)foundProperties;	// 0x35aa4921
- (id)fullName;	// 0x35aa4931
- (id)imageData;	// 0x35aa750d
- (BOOL)setImageData:(id)data cropRectX:(int)x cropRectY:(int)y cropRectWidth:(int)width cropRectHeight:(int)height;	// 0x35aa7539
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x35aa75b1
- (void)setValueInTemporaryCache:(id)temporaryCache forProperty:(unsigned)property;	// 0x35aa74ed
- (void *)valueForProperty:(unsigned)property;	// 0x35aa7585
@end

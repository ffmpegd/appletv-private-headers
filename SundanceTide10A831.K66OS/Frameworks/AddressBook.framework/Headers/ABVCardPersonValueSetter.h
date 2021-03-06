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
+ (CFArrayRef)supportedProperties;	// 0x313e7ae1
- (id)initWithPerson:(void *)person;	// 0x313e7a05
- (void)dealloc;	// 0x313e7a85
- (CFArrayRef)foundProperties;	// 0x313e7a75
- (id)fullName;	// 0x313e7e51
- (id)imageData;	// 0x313e7e25
- (BOOL)setImageData:(id)data cropRectX:(int)x cropRectY:(int)y cropRectWidth:(int)width cropRectHeight:(int)height;	// 0x313e7dd5
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x313e7d21
- (void)setValueInTemporaryCache:(id)temporaryCache forProperty:(unsigned)property;	// 0x313e7e55
- (void *)valueForProperty:(unsigned)property;	// 0x313e7da9
@end


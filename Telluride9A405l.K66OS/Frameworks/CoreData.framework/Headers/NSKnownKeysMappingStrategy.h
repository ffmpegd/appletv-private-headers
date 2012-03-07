/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"
#import "NSCoding.h"
#import "NSFastEnumeration.h"


@interface NSKnownKeysMappingStrategy : NSObject <NSCoding, NSFastEnumeration> {
}
+ (id)alloc;	// 0x33f30ced
+ (id)allocWithZone:(NSZone *)zone;	// 0x33f9c8ad
- (id)initForKeys:(id)keys;	// 0x33f9ab61
- (id)initForKeys:(const id *)keys count:(unsigned)count;	// 0x33f9ab5d
- (id)initWithCoder:(id)coder;	// 0x33f9ab7d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33f9ab85
- (void)encodeWithCoder:(id)coder;	// 0x33f9ab81
- (unsigned)fastIndexForKnownKey:(id)knownKey;	// 0x33f9ab6d
- (unsigned)indexForKey:(id)key;	// 0x33f9ab65
- (const id *)keys;	// 0x33f9ab75
- (unsigned)length;	// 0x33f9ab79
@end


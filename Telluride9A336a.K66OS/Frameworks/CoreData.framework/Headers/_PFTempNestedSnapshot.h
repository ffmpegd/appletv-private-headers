/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSKnownKeysDictionary;

__attribute__((visibility("hidden")))
@interface _PFTempNestedSnapshot : NSObject {
@private
	NSKnownKeysDictionary *_snapshot;	// 4 = 0x4
	unsigned _version;	// 8 = 0x8
}
- (id)initWithOwnedKKsD:(id)ownedKKsD andVersion:(unsigned long)version;	// 0x3237b615
- (id)_snapshot_;	// 0x3237034d
- (unsigned)_versionNumber;	// 0x32370351
- (void)dealloc;	// 0x3237b665
- (const id *)knownKeyValuesPointer;	// 0x32377a95
- (id)valueForKey:(id)key;	// 0x32377ab5
@end

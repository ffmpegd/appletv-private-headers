/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import </libobjc.A.h>

@class NSKnownKeysDictionary;

@interface _PFTempNestedSnapshot : NSObject {
	NSKnownKeysDictionary *_snapshot;	// 4 = 0x4
	unsigned long _version;	// 8 = 0x8
}
- (id)initWithOwnedKKsD:(id)ownedKKsD andVersion:(unsigned long)version;	// 0x2d0cc7a9
- (id)_snapshot_;	// 0x2d0cc819
- (unsigned)_versionNumber;	// 0x2d0cc81d
- (void)dealloc;	// 0x2d0cc82d
- (const id *)knownKeyValuesPointer;	// 0x2d0cc7f9
- (id)valueForKey:(id)key;	// 0x2d0cc879
@end


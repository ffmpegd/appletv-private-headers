/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedCollection.h"


__attribute__((visibility("hidden")))
@interface EDContentFormatsCollection : EDKeyedCollection {
@private
	unsigned mNextContentFormatId;	// 12 = 0xc
}
- (id)init;	// 0x34c55fa1
- (void)addDefaultWithNSString:(id)nsstring formatId:(unsigned)anId;	// 0x34c5649d
- (unsigned)addObject:(id)object;	// 0x34c56755
- (unsigned)addOrEquivalentObject:(id)object;	// 0x34c5b395
- (bool)isOverwritingKeyOK;	// 0x34dcba19
- (void)setupDefaults;	// 0x34c5605d
@end


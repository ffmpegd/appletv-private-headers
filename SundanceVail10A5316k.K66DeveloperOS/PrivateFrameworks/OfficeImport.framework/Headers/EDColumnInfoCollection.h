/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDSortedCollection.h"

@class EDResources, EDWorksheet;

__attribute__((visibility("hidden")))
@interface EDColumnInfoCollection : EDSortedCollection {
@private
	EDResources *mResources;	// 12 = 0xc
	EDWorksheet *mWorksheet;	// 16 = 0x10
}
- (id)initWithResources:(id)resources worksheet:(id)worksheet;	// 0x310a6a49
- (id)columnInfoCreateIfNilForColumnNumber:(int)columnNumber;	// 0x3122aef5
- (id)columnInfoForColumnNumber:(int)columnNumber;	// 0x310c1445
- (void)dealloc;	// 0x310c4ba9
@end


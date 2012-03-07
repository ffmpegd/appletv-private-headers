/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, WDDocument;

__attribute__((visibility("hidden")))
@interface WDRevisionAuthorTable : NSObject {
@private
	NSMutableArray *mAuthors;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
}
- (id)initWithDocument:(id)document;	// 0x34c9fea9
- (void)addAuthor:(id)author;	// 0x34e10641
- (int)authorAddLookup:(id)lookup;	// 0x34e105d9
- (id)authorAt:(int)at;	// 0x34e10665
- (int)authorCount;	// 0x34e1071d
- (id)authors;	// 0x34cacb4d
- (void)dealloc;	// 0x34c20955
@end


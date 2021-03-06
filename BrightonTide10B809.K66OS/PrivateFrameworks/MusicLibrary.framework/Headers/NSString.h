/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSString.h> // Unknown library
#import "MusicLibrary-Structs.h"


@interface NSString (InsignificantCharacterFiltering)
- (id)MLSortString;	// 0x346b49f1
- (id)_copyWithoutInsignificantPrefix:(BOOL)prefix andCharacters:(BOOL)characters;	// 0x346b496d
- (NSRange)_rangeWithoutInsignificantPrefix:(BOOL)prefix andCharacters:(BOOL)characters;	// 0x346b4675
- (id)copyWithoutInsignificantCharacters;	// 0x346b49dd
- (id)copyWithoutInsignificantPrefixAndCharacters;	// 0x346b49c9
@end

@interface NSString (MLSQLiteStatmentBindingAdditions)
- (void)MLBindToSQLiteStatement:(sqlite3_stmt *)sqliteStatement atPosition:(int)position;	// 0x346aa3f1
@end

@interface NSString (ImportSanity)
- (id)sanitizedString;	// 0x3470e241
@end


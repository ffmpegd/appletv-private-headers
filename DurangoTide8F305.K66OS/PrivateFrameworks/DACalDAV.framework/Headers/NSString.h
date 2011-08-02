/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSString.h> // Unknown library


@interface NSString (CalendarExtensions)
+ (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation;	// 0x340a90e5
- (BOOL)hasPrefixCaseInsensitive:(id)insensitive;	// 0x340a9071
- (id)quote;	// 0x340a99c1
- (id)safeFilename;	// 0x340a8771
- (id)searchAndReplaceString:(id)string withString:(id)string2;	// 0x340a87e9
- (id)trimChar:(unsigned short)aChar;	// 0x340a8901
- (id)trimCommas;	// 0x340a89d9
- (id)trimFinalChar:(unsigned short)aChar;	// 0x340a8971
- (id)trimFinalComma;	// 0x340a8a41
- (id)trimFirstChar:(unsigned short)aChar;	// 0x340a8929
- (id)trimFirstComma;	// 0x340a89fd
- (id)trimWhiteSpace;	// 0x340a90a5
- (id)unquote;	// 0x340a9a5d
@end

@interface NSString (CalendarPathExtensions)
+ (id)stringWithContentsOfFile:(id)file usingEncoding:(unsigned)encoding;	// 0x340a8ff1
- (BOOL)isPathToAppleScript;	// 0x340a8d11
- (BOOL)isPathToBackupFile;	// 0x340a8c21
- (BOOL)isPathToICalBookmark;	// 0x340a8bc1
- (BOOL)isPathToICalData;	// 0x340a8c5d
- (BOOL)isPathToVCalData;	// 0x340a8c99
@end

@interface NSString (CALIDExtensions)
- (id)stringByDecodingSlashes;	// 0x340a8e09
- (id)stringByEncodingSlashes;	// 0x340a9af9
@end

@interface NSString (CALExtensions)
+ (id)ellipsisString;	// 0x340a8d4d
@end

@interface NSString (CalNSStringEmailAddressAdditions)
- (BOOL)hasMailto;	// 0x340a9ba1
- (BOOL)resemblesEmailAddress;	// 0x340a9c79
- (id)stringAddingMailto;	// 0x340a9b69
- (id)stringRemovingMailto;	// 0x340a9b35
@end

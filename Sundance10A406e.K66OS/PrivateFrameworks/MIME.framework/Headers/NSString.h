/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSString.h> // Unknown library
#import "MIME-Structs.h"


@interface NSString (NSEmailAddressString)
+ (id)mf_formattedAddressWithName:(id)name email:(id)email useQuotes:(BOOL)quotes;	// 0x346deb51
+ (id)mf_nameExtensions;	// 0x346dfb25
+ (id)mf_partialSurnames;	// 0x346dfc8d
- (id)mf_addressComment;	// 0x346dea51
- (void)mf_addressCommentFirstName:(id *)name middleName:(id *)name2 lastName:(id *)name3 extension:(id *)extension;	// 0x346df291
- (id)mf_addressDomain;	// 0x346df155
- (BOOL)mf_appearsToBeAnInitial;	// 0x346dfd69
- (id)mf_copyAddressComment;	// 0x346deb29
- (id)mf_copyIDNADecodedEmailAddress;	// 0x346df211
- (id)mf_copyIDNAEncodedEmailAddress;	// 0x346df251
- (id)mf_copyUncommentedAddress;	// 0x346de449
- (void)mf_firstName:(id *)name middleName:(id *)name2 lastName:(id *)name3 extension:(id *)extension;	// 0x346df305
- (BOOL)mf_hasSameNamesAs:(id)as;	// 0x346dfa45
- (BOOL)mf_isEqualToAddress:(id)address;	// 0x346df1f1
- (BOOL)mf_isLegalCommentedEmailAddress;	// 0x346ded45
- (BOOL)mf_isLegalEmailAddress;	// 0x346ded6d
- (NSRange)mf_rangeOfAddressDomain;	// 0x346deefd
- (id)mf_trimCommasSpacesQuotes;	// 0x346dfdc1
- (id)mf_uncommentedAddress;	// 0x346de6d1
- (id)mf_uncommentedAddressRespectingGroups;	// 0x346de6f9
@end

@interface NSString (MimeCharsetSupport)
- (id)_mf_bestMimeCharset:(id)charset;	// 0x346e1cf5
- (id)mf_bestMimeCharset;	// 0x346e1ce1
- (id)mf_bestMimeCharsetForMessageDeliveryUsingSubtype:(id)messageDeliveryUsingSubtype;	// 0x346e20d1
- (id)mf_bestMimeCharsetUsingHint:(unsigned long)hint;	// 0x346e1e25
@end

@interface NSString (MimeHeaderEncoding)
- (id)mf_decodeMimeHeaderValueWithCharsetHint:(id)charsetHint;	// 0x346e3625
- (id)mf_decodeMimeHeaderValueWithEncodingHint:(unsigned long)encodingHint;	// 0x346e319d
- (id)mf_encodedHeaderDataWithEncodingHint:(unsigned long)encodingHint;	// 0x346e27e1
@end

@interface NSString (MFStringUtils)
+ (id)mf_stringWithData:(id)data encoding:(unsigned)encoding;	// 0x346ea171
- (id)mf_MD5Digest;	// 0x346ea5e5
- (int)mf_caseInsensitiveCompareExcludingXDash:(id)dash;	// 0x346ea329
- (id)mf_copyStringByDecodingIDNA;	// 0x346eaa01
- (id)mf_copyStringByDecodingIDNAInRange:(NSRange)range;	// 0x346ea71d
- (id)mf_copyStringByEncodingIDNA;	// 0x346eaa35
- (id)mf_copyStringByEncodingIDNAInRange:(NSRange)range;	// 0x346ea959
- (id)mf_dataUsingEncoding:(unsigned)encoding;	// 0x346ea45d
- (id)mf_dataUsingEncoding:(unsigned)encoding allowLossyConversion:(BOOL)conversion;	// 0x346ea471
- (const void *)mf_lossyDefaultCStringBytes;	// 0x346ea1c5
- (id)mf_messageIDSubstring;	// 0x346ea675
@end


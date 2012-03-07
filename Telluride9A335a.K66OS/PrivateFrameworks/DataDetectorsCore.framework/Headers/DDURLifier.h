/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import "DataDetectorsCore-Structs.h"
#import <NSObject.h> // Unknown library


@interface DDURLifier : NSObject {
}
+ (void)initialize;	// 0x357b301d
+ (BOOL)urlIfyNode:(id)node;	// 0x357b37a9
+ (BOOL)urlIfyNode:(id)node phoneNumberTypes:(unsigned)types;	// 0x357b3655
+ (id)urlIfyNode:(id)node usingScanner:(DDScannerRef)scanner phoneNumberTypes:(unsigned)types;	// 0x357b37c1
+ (id)urlIfyNode:(id)node usingScanner:(DDScannerRef)scanner phoneNumberTypes:(unsigned)types withReferenceDate:(id)referenceDate andTimeZone:(id)zone;	// 0x357b37ed
+ (BOOL)urlIfyTextNode:(id)node inNode:(id)node2 forMatches:(id)matches;	// 0x357b34cd
+ (id)urlMatchesForString:(id)string;	// 0x357b305d
+ (id)urlMatchesForString:(id)string includingTel:(BOOL)tel;	// 0x357b3071
+ (id)urlMatchesForString:(id)string phoneNumberTypes:(unsigned)types;	// 0x357b3091
+ (id)urlMatchesForString:(id)string usingScanner:(DDScannerRef)scanner withPhoneNumberTypes:(unsigned)phoneNumberTypes referenceDate:(id)date timeZone:(id)zone storingResultsIn:(id)anIn;	// 0x357b3375
@end


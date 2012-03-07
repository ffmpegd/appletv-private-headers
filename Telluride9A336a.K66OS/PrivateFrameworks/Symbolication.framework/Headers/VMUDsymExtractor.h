/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUSymbolExtractor.h"


@interface VMUDsymExtractor : VMUSymbolExtractor {
}
+ (id)directoryForDsymBundle:(id)dsymBundle;	// 0x30149865
+ (id)dsymExtractorWithMachOHeader:(id)machOHeader;	// 0x30149361
+ (id)dsymPathForHeaderPath:(id)headerPath uuid:(id)uuid searchingDirectories:(id)directories;	// 0x30149269
+ (id)fullHeaderPathForBaseBinaryDirectory:(id)baseBinaryDirectory oldHeaderPath:(id)path checkUUID:(id)uuid architecture:(id)architecture;	// 0x3014969d
+ (id)localDsymPathForHeaderPath:(id)headerPath uuid:(id)uuid;	// 0x3014926d
+ (id)spotlightDsymPathForHeaderPath:(id)headerPath uuid:(id)uuid;	// 0x30149265
- (id)initWithMachOHeader:(id)machOHeader;	// 0x3014939d
@end


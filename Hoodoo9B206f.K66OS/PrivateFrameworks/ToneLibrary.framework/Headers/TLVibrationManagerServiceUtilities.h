/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library


@interface TLVibrationManagerServiceUtilities : NSObject {
}
+ (BOOL)_isValidObject:(id)object error:(id *)error forValidationBlock:(id)validationBlock;	// 0x3159eac1
+ (BOOL)_objectIsValidUserGeneratedVibrationPattern:(id)pattern error:(id *)error;	// 0x3159eb5d
+ (id)_sharedResourceFilePathForRelativeFilePath:(id)relativeFilePath;	// 0x3159f101
+ (id)_sharedResourceURLForRelativeFilePath:(id)relativeFilePath;	// 0x3159f121
+ (id)dictionaryFromXPCObject:(void *)xpcobject error:(id *)error;	// 0x3159e6d9
+ (id)errorWithDomain:(id)domain description:(id)description;	// 0x3159e9c9
+ (void *)newXPCObjectFromDictionary:(id)dictionary inReplyToXPCObject:(void *)xpcobject error:(id *)error;	// 0x3159e865
+ (BOOL)objectIsValidUserGeneratedVibrationPatternsDictionary:(id)dictionary error:(id *)error;	// 0x3159eda1
+ (id)userGeneratedVibrationStoreFileURL;	// 0x3159f15d
@end

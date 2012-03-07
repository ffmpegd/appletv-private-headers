/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library


@interface TLVibrationManagerServiceUtilities : NSObject {
}
+ (BOOL)_isValidObject:(id)object error:(id *)error forValidationBlock:(id)validationBlock;	// 0x31f22ac9
+ (BOOL)_objectIsValidUserGeneratedVibrationPattern:(id)pattern error:(id *)error;	// 0x31f22b65
+ (id)_sharedResourceFilePathForRelativeFilePath:(id)relativeFilePath;	// 0x31f23109
+ (id)_sharedResourceURLForRelativeFilePath:(id)relativeFilePath;	// 0x31f23129
+ (id)dictionaryFromXPCObject:(void *)xpcobject error:(id *)error;	// 0x31f226e1
+ (id)errorWithDomain:(id)domain description:(id)description;	// 0x31f229d1
+ (void *)newXPCObjectFromDictionary:(id)dictionary inReplyToXPCObject:(void *)xpcobject error:(id *)error;	// 0x31f2286d
+ (BOOL)objectIsValidUserGeneratedVibrationPatternsDictionary:(id)dictionary error:(id *)error;	// 0x31f22da9
+ (id)userGeneratedVibrationStoreFileURL;	// 0x31f23165
@end


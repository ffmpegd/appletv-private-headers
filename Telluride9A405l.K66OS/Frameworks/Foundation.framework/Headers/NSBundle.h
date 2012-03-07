/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSBundle : NSObject {
@private
	unsigned _flags;	// 4 = 0x4
	id _cfBundle;	// 8 = 0x8
	unsigned _reserved2;	// 12 = 0xc
	Class _principalClass;	// 16 = 0x10
	id _tmp1;	// 20 = 0x14
	id _tmp2;	// 24 = 0x18
	void *_reserved1;	// 28 = 0x1c
	void *_reserved0;	// 32 = 0x20
}
@property(readonly, assign) Class principalClass;	// G=0x3027cb61; converted property
+ (id)URLForResource:(id)resource withExtension:(id)extension subdirectory:(id)subdirectory inBundleWithURL:(id)url;	// 0x302a9481
+ (id)URLsForResourcesWithExtension:(id)extension subdirectory:(id)subdirectory inBundleWithURL:(id)url;	// 0x302a9575
+ (id)allBundles;	// 0x3028fd99
+ (id)allFrameworks;	// 0x3028f9f1
+ (id)bundleForClass:(Class)aClass;	// 0x302595b1
+ (id)bundleWithIdentifier:(id)identifier;	// 0x30278885
+ (id)bundleWithPath:(id)path;	// 0x30277771
+ (id)bundleWithURL:(id)url;	// 0x302a9b15
+ (id)debugDescription;	// 0x302aa33d
+ (id)findBundleResourceURLs:(id)urls callingMethod:(SEL)method bundleURL:(id)url languages:(id)languages name:(id)name types:(id)types limit:(unsigned)limit;	// 0x302a92a1
+ (id)findBundleResourceURLsCallingMethod:(SEL)method baseURL:(id)url passingTest:(id)test;	// 0x302a93dd
+ (id)findBundleResources:(id)resources callingMethod:(SEL)method directory:(id)directory languages:(id)languages name:(id)name types:(id)types limit:(unsigned)limit;	// 0x302a9171
+ (id)loadedBundles;	// 0x302aa165
+ (id)mainBundle;	// 0x3025054d
+ (id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory;	// 0x302a9425
+ (id)pathsForResourcesOfType:(id)type inDirectory:(id)directory;	// 0x302a94b9
+ (id)preferredLocalizationsFromArray:(id)array;	// 0x302aa4c5
+ (id)preferredLocalizationsFromArray:(id)array forPreferences:(id)preferences;	// 0x302aa4f5
+ (void)setSystemLanguages:(id)languages;	// 0x302a9841
- (id)initWithPath:(id)path;	// 0x3026028d
- (id)initWithURL:(id)url;	// 0x302a9a39
- (id)URLForAuxiliaryExecutable:(id)auxiliaryExecutable;	// 0x302a9d45
- (id)URLForResource:(id)resource withExtension:(id)extension;	// 0x302886ed
- (id)URLForResource:(id)resource withExtension:(id)extension subdirectory:(id)subdirectory;	// 0x302a95f9
- (id)URLForResource:(id)resource withExtension:(id)extension subdirectory:(id)subdirectory localization:(id)localization;	// 0x302a95a5
- (id)URLsForResourcesWithExtension:(id)extension subdirectory:(id)subdirectory;	// 0x302a97f5
- (id)URLsForResourcesWithExtension:(id)extension subdirectory:(id)subdirectory localization:(id)localization;	// 0x302a96f9
- (CFBundleRef)_cfBundle;	// 0x30250745
- (id)_compatibility_bundleURL;	// 0x302a9bc5
- (id)_compatility_bundlePath;	// 0x302a9b55
- (id)_computeExecutablePath;	// 0x3027d49d
- (void)_initInfoDictionary;	// 0x3025e1e9
- (id)_pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory forRegion:(id)region;	// 0x302aa405
- (id)_pathsForResourcesOfType:(id)type inDirectory:(id)directory forRegion:(id)region;	// 0x302aa415
- (id)_regionsArray;	// 0x302aa3f5
- (id)builtInPlugInsPath;	// 0x302a9edd
- (id)builtInPlugInsURL;	// 0x302a9f1d
- (id)bundleIdentifier;	// 0x30253b81
- (id)bundleLanguages;	// 0x302a9f85
- (id)bundlePath;	// 0x30253e89
- (id)bundleURL;	// 0x3028f831
- (Class)classNamed:(id)named;	// 0x3029eb3d
- (void)dealloc;	// 0x302602f1
- (id)defaultsDictionary;	// 0x302aa0a9
- (id)description;	// 0x302aa365
- (id)developmentLocalization;	// 0x302aa47d
- (id)executableArchitectures;	// 0x302aa615
- (id)executablePath;	// 0x302942ad
- (id)executableURL;	// 0x302a9cb5
- (void)finalize;	// 0x302a98c5
- (id)findBundleResourceURLsCallingMethod:(SEL)method passingTest:(id)test;	// 0x302a9369
- (id)infoDictionary;	// 0x30253bb9
- (void)invalidateResourceCache;	// 0x302aa079
- (BOOL)isLoaded;	// 0x3028f701
- (BOOL)load;	// 0x3027cbb1
- (BOOL)loadAndReturnError:(id *)error;	// 0x3027cbc9
- (id)localizations;	// 0x3028f141
- (id)localizationsToSearch;	// 0x302aa4a1
- (id)localizedInfoDictionary;	// 0x3027aed1
- (id)localizedStringForKey:(id)key value:(id)value table:(id)table;	// 0x302506f9
- (id)objectForInfoDictionaryKey:(id)infoDictionaryKey;	// 0x3027ae81
- (id)pathForAuxiliaryExecutable:(id)auxiliaryExecutable;	// 0x302a9cf9
- (id)pathForResource:(id)resource ofType:(id)type;	// 0x3025a9b5
- (id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory;	// 0x30293375
- (id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory forLanguage:(id)language;	// 0x302aa425
- (id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory forLocalization:(id)localization;	// 0x30299759
- (id)pathsForResourcesOfType:(id)type inDirectory:(id)directory;	// 0x302a9745
- (id)pathsForResourcesOfType:(id)type inDirectory:(id)directory forLanguage:(id)language;	// 0x302aa435
- (id)pathsForResourcesOfType:(id)type inDirectory:(id)directory forLocalization:(id)localization;	// 0x302a9645
- (id)preferredLocalizations;	// 0x302aa445
- (BOOL)preflightAndReturnError:(id *)error;	// 0x302aa529
// converted property getter: - (Class)principalClass;	// 0x3027cb61
- (id)privateFrameworksPath;	// 0x3028083d
- (id)privateFrameworksURL;	// 0x302a9d91
- (oneway void)release;	// 0x302640a5
- (id)resourcePath;	// 0x302777b1
- (id)resourceURL;	// 0x302a9c71
- (id)sharedFrameworksPath;	// 0x302a9dd5
- (id)sharedFrameworksURL;	// 0x302a9e15
- (id)sharedSupportPath;	// 0x302a9e59
- (id)sharedSupportURL;	// 0x302a9e99
- (BOOL)unload;	// 0x302a9855
- (unsigned)versionNumber;	// 0x302a9f61
@end


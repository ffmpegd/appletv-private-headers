/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSBundle : NSObject {
	unsigned _flags;	// 4 = 0x4
	id _cfBundle;	// 8 = 0x8
	unsigned _reserved2;	// 12 = 0xc
	Class _principalClass;	// 16 = 0x10
	id _tmp1;	// 20 = 0x14
	id _tmp2;	// 24 = 0x18
	void *_reserved1;	// 28 = 0x1c
	void *_reserved0;	// 32 = 0x20
}
@property(readonly, assign) Class principalClass;	// G=0x318ec341; converted property
+ (id)URLForResource:(id)resource withExtension:(id)extension subdirectory:(id)subdirectory inBundleWithURL:(id)url;	// 0x31908c69
+ (id)URLsForResourcesWithExtension:(id)extension subdirectory:(id)subdirectory inBundleWithURL:(id)url;	// 0x31908d65
+ (id)allBundles;	// 0x318ecaed
+ (id)allFrameworks;	// 0x318ec751
+ (id)bundleForClass:(Class)aClass;	// 0x318b4a1d
+ (id)bundleWithIdentifier:(id)identifier;	// 0x318cb7e1
+ (id)bundleWithPath:(id)path;	// 0x318cb835
+ (id)bundleWithURL:(id)url;	// 0x31909315
+ (id)debugDescription;	// 0x31909c21
+ (id)findBundleResourceURLs:(id)urls callingMethod:(SEL)method bundleURL:(id)url languages:(id)languages name:(id)name types:(id)types limit:(unsigned)limit;	// 0x319086f5
+ (id)findBundleResourceURLsCallingMethod:(SEL)method baseURL:(id)url passingTest:(id)test;	// 0x31908a9d
+ (id)findBundleResources:(id)resources callingMethod:(SEL)method directory:(id)directory languages:(id)languages name:(id)name types:(id)types limit:(unsigned)limit;	// 0x3190855d
+ (id)loadedBundles;	// 0x31909a3d
+ (id)mainBundle;	// 0x318a9815
+ (id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory;	// 0x31908c15
+ (id)pathsForResourcesOfType:(id)type inDirectory:(id)directory;	// 0x31908ca1
+ (id)preferredLocalizationsFromArray:(id)array;	// 0x318d4ac1
+ (id)preferredLocalizationsFromArray:(id)array forPreferences:(id)preferences;	// 0x31909d71
+ (void)setSystemLanguages:(id)languages;	// 0x3190903d
- (id)initWithPath:(id)path;	// 0x318cb875
- (id)initWithURL:(id)url;	// 0x31909239
- (id)URLForAuxiliaryExecutable:(id)auxiliaryExecutable;	// 0x31909575
- (id)URLForResource:(id)resource withExtension:(id)extension;	// 0x318e37d1
- (id)URLForResource:(id)resource withExtension:(id)extension subdirectory:(id)subdirectory;	// 0x31908de9
- (id)URLForResource:(id)resource withExtension:(id)extension subdirectory:(id)subdirectory localization:(id)localization;	// 0x31908d95
- (id)URLsForResourcesWithExtension:(id)extension subdirectory:(id)subdirectory;	// 0x31908ff1
- (id)URLsForResourcesWithExtension:(id)extension subdirectory:(id)subdirectory localization:(id)localization;	// 0x31908eed
- (CFBundleRef)_cfBundle;	// 0x318a9b5d
- (id)_compatibility_bundleURL;	// 0x319093c5
- (id)_compatility_bundlePath;	// 0x31909355
- (id)_computeExecutablePath;	// 0x318ec1d5
- (void)_initInfoDictionary;	// 0x318c33a5
- (id)_pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory forRegion:(id)region;	// 0x31909ce9
- (id)_pathsForResourcesOfType:(id)type inDirectory:(id)directory forRegion:(id)region;	// 0x31909cf9
- (id)_regionsArray;	// 0x31909cd9
- (id)appStoreReceiptURL;	// 0x319094f9
- (id)builtInPlugInsPath;	// 0x31909751
- (id)builtInPlugInsURL;	// 0x31909791
- (id)bundleIdentifier;	// 0x318a9ad5
- (id)bundleLanguages;	// 0x319097f9
- (id)bundlePath;	// 0x318af829
- (id)bundleURL;	// 0x318c36d5
- (Class)classNamed:(id)named;	// 0x319099e1
- (void)dealloc;	// 0x318cb8d9
- (id)defaultsDictionary;	// 0x31909921
- (id)description;	// 0x31909c49
- (id)developmentLocalization;	// 0x31909d29
- (id)executableArchitectures;	// 0x31909e91
- (id)executablePath;	// 0x318f6f81
- (id)executableURL;	// 0x319094b5
- (void)finalize;	// 0x319090c1
- (id)findBundleResourceURLsCallingMethod:(SEL)method passingTest:(id)test;	// 0x31908935
- (id)infoDictionary;	// 0x318a9b0d
- (void)invalidateResourceCache;	// 0x319098ed
- (BOOL)isLoaded;	// 0x318eb865
- (BOOL)load;	// 0x318ec391
- (BOOL)loadAndReturnError:(id *)error;	// 0x318eb8ad
- (id)localizations;	// 0x318d4a7d
- (id)localizationsToSearch;	// 0x31909d4d
- (id)localizedInfoDictionary;	// 0x318d4b45
- (id)localizedStringForKey:(id)key value:(id)value table:(id)table;	// 0x318aa491
- (id)objectForInfoDictionaryKey:(id)infoDictionaryKey;	// 0x318d4af1
- (id)pathForAuxiliaryExecutable:(id)auxiliaryExecutable;	// 0x31909529
- (id)pathForResource:(id)resource ofType:(id)type;	// 0x318d7449
- (id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory;	// 0x318e1d1d
- (id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory forLanguage:(id)language;	// 0x31909d09
- (id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory forLocalization:(id)localization;	// 0x318fd8f5
- (id)pathsForResourcesOfType:(id)type inDirectory:(id)directory;	// 0x31908f39
- (id)pathsForResourcesOfType:(id)type inDirectory:(id)directory forLanguage:(id)language;	// 0x31909d19
- (id)pathsForResourcesOfType:(id)type inDirectory:(id)directory forLocalization:(id)localization;	// 0x31908e35
- (id)preferredLocalizations;	// 0x318d4a45
- (BOOL)preflightAndReturnError:(id *)error;	// 0x31909da5
// converted property getter: - (Class)principalClass;	// 0x318ec341
- (id)privateFrameworksPath;	// 0x319095c5
- (id)privateFrameworksURL;	// 0x31909605
- (oneway void)release;	// 0x318c24c1
- (id)resourcePath;	// 0x318ed3d5
- (id)resourceURL;	// 0x31909471
- (id)sharedFrameworksPath;	// 0x31909649
- (id)sharedFrameworksURL;	// 0x31909689
- (id)sharedSupportPath;	// 0x319096cd
- (id)sharedSupportURL;	// 0x3190970d
- (BOOL)unload;	// 0x31909051
- (unsigned)versionNumber;	// 0x319097d5
@end

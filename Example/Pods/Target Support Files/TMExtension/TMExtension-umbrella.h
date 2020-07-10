#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "NSArray+MTHelper.h"
#import "NSDictionary+MTHelper.h"
#import "NSString+MTHelper.h"

FOUNDATION_EXPORT double TMExtensionVersionNumber;
FOUNDATION_EXPORT const unsigned char TMExtensionVersionString[];


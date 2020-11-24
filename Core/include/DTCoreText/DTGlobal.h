//
//  Header.h
//  
//
//  Created by TanHuynh on 2020/11/23.
//

#import <Foundation/Foundation.h>

@interface DTGlobal : NSObject {}

+ (NSUInteger)integerValueFromHex:(NSString *)string;

+ (BOOL)isNumeric:(NSString *)string;

+ (BOOL)isIgnorableWhitespace:(NSString *)string;

+ (float)percentValue:(NSString *)string;

+ (BOOL)hasPrefixCharacterFromSet:(NSCharacterSet *)characterSet :(NSString *)string;

+ (BOOL)hasSuffixCharacterFromSet:(NSCharacterSet *)characterSet :(NSString *)string;

+ (NSString *)stringByNormalizingWhitespace:(NSString *)string;

+ (NSString *)stringByAddingHTMLEntities:(NSString *)string;

+ (NSString *)stringByReplacingHTMLEntities:(NSString *)string;

+ (NSString *)stringByAddingAppleConvertedSpace:(NSString *)string;

+ (NSString *)stringByEncodingNonASCIICharacters:(NSString *)string;

@end

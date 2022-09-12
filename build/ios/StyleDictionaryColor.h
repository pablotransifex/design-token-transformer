
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Mon, 12 Sep 2022 09:22:02 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
NotExported,
ColorsSemiRed,
ColorsMultipleFills0,
ColorsMultipleFills1,
ColorsSingleBlue,
ColorsRefBlue,
ColorsEmpty,
ColorsSpecialCharacters,
ColorsSpecialCharactersNderung,
ColorColorsSemiRed,
ColorColorsMultipleFills0,
ColorColorsMultipleFills1,
ColorColorsSingleBlue,
ColorColorsRefBlue,
ColorColorsEmpty,
ColorColorsSpecialCharacters,
ColorColorsSpecialCharactersNderung
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end

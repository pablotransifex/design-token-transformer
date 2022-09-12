
//
// StyleDictionaryColor.m
//

// Do not edit directly
// Generated on Mon, 12 Sep 2022 09:22:02 GMT


#import "StyleDictionaryColor.h"

@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
#fe5050ff,
#ff5f0480,
#40ffbaff,
#0000001a,
#044affff,
#044affff,
#00000000,
#40df50ff,
#3456afff,
[UIColor colorWithRed:1.000f green:0.373f blue:0.016f alpha:0.502f],
[UIColor colorWithRed:0.251f green:1.000f blue:0.729f alpha:1.000f],
[UIColor colorWithRed:0.000f green:0.000f blue:0.000f alpha:0.102f],
[UIColor colorWithRed:0.016f green:0.290f blue:1.000f alpha:1.000f],
[UIColor colorWithRed:0.016f green:0.290f blue:1.000f alpha:1.000f],
[UIColor colorWithRed:0.000f green:0.000f blue:0.000f alpha:0.000f],
[UIColor colorWithRed:0.251f green:0.875f blue:0.314f alpha:1.000f],
[UIColor colorWithRed:0.204f green:0.337f blue:0.686f alpha:1.000f]
    ];
  });

  return colorArray;
}

@end

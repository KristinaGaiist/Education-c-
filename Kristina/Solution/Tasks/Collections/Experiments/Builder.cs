using System.Text;

namespace Tasks.Collections.Experiments
{
    public static class Builder
    {
        private const string separator = "-----";

        public static StringBuilder AppendBeautifull(this StringBuilder builder, string @string)
        {
            builder.AppendLine(separator);
            builder.AppendLine(@string);
            builder.AppendLine(separator);

            return builder;
        }
    }
}
